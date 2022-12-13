

int binarySearch(vector<vector<int>>& pairs, int val) {
    int low = 0;
    int high = pairs.size() - 1;
    int mid = 0;
    while (low <= high) {
        mid = (high + low) / 2;
        if (pairs[mid][0] == val && pairs[mid][1] == val) {
            return mid;
        }
        else if (pairs[mid][0] < val || pairs[mid][0] == val && pairs[mid][1] < val) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;

}

class SummaryRanges {
public:

    vector<vector<int>> pairs;
    set<int> pairset;
    SummaryRanges() {
    }

    void addNum(int val) {
        if(pairset.find(val) == pairset.end()){
        pairs.push_back({ val, val });
        sort(pairs.begin(), pairs.end());
        int num = binarySearch(pairs, val);
        pairset.insert(val);
        if (num < pairs.size() - 1 && pairs[num][1] + 1 == pairs[num + 1][0]) {
            pairs[num][1] = pairs[num + 1][1];
            pairs.erase(pairs.begin() + num + 1);

        }
        if (num > 0 && pairs[num - 1][1] + 1 == pairs[num][0]) {
            pairs[num -1][1] = pairs[num][1];
            pairs.erase(pairs.begin() + num);
        }
        }
    }

    vector<vector<int>> getIntervals() {
        return pairs;
    }
};