class Solution {
public:
    int carFleet(float target, vector<int>& position, vector<int>& speed) {
        size_t size = position.size();
        auto sort_t = size;
        double time = -1;
        double trace = 0;
        long fleet = 0;
        vector<pair<int, int>> map;
        for (int i = 0; i < size; ++i) {
            map.push_back(make_pair(target - position[i], speed[i]));
        }
        sort(map.begin(), map.end());
        for (int i = 0; i < size; ++i) {
            trace = ((float)map[i].first) / map[i].second;
            if (trace > time) {
                fleet++;
                time = trace;
            }
        }
        return fleet;
    }
};