double AreaOfTriangle(vector<int> a, vector<int> b, vector<int> c){
double sa, sb, sc, s;
    sa = sqrt((double)pow((b[1] - a[1]), 2) + pow((b[0] - a[0]), 2));
    sb = sqrt((double)pow((c[1] - a[1]), 2) + pow((c[0] - a[0]), 2));
    sc = sqrt((double)pow((b[1] - c[1]), 2) + pow((b[0] - c[0]), 2));
    s = ((double)sa +sb + sc) / 2;
    return sqrt(s*(s-sa)*(s-sb)*(s-sc));
}


class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& p) {
        double res = 0;
        for (auto &i : p)
            for (auto &j : p)
                for (auto &k : p)
            res = max(res, 0.5 * abs(i[0] * j[1] + j[0] * k[1] + k[0] * i[1]- j[0] * i[1] - k[0] * j[1] - i[0] * k[1]));
        return res;
    }
};