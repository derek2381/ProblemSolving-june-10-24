// problem link
// https://leetcode.com/problems/height-checker/description/


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        priority_queue<int, vector<int> ,greater<int>> pq(heights.begin(), heights.end());

        int count = 0;


        for(int i : heights){
            int n = pq.top();
            if(i != n){
                count++;
            }

            pq.pop();
        }

        return count;
    }
};
