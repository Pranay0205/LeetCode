
bool compare(vector<int>& p1, vector<int>& p2) {
    if (p1[0] != p2[0]) {
        return p1[0] < p2[0];
    }
    return p1[1] < p2[1];
}


int dist(vector<int>& p1, vector<int>& p2) {

    return pow((p1[0] - p2[0]), 2) + pow((p1[1] - p2[1]), 2);

}


class Solution {
public:


    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {

        if (p1 == p2) {
            return false;
        }
        vector<vector<int>> coordinates;
    
        coordinates.push_back(p1);
        coordinates.push_back(p2);
        coordinates.push_back(p3);
        coordinates.push_back(p4);

        sort(coordinates.begin(), coordinates.end(), compare);

        int d1 = dist(coordinates[0], coordinates[1]);
        int d2 = dist(coordinates[1], coordinates[3]);
        int d3 = dist(coordinates[0], coordinates[2]);
        int d4 = dist(coordinates[2], coordinates[3]);
        int d5 = dist(coordinates[1], coordinates[2]);
        int d6 = dist(coordinates[0], coordinates[3]);


        if (d1 == d2 && d2 == d3 && d3 == d4 && d5 == d6) {
            return true;
        }
        else {
            return false;
        }

    }
};