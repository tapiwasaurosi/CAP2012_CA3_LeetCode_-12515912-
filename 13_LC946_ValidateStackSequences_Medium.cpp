class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> silo;
        size_t cursor =0;
        for(int item : pushed) {
            silo.push_back(item);
            while(!silo.empty() && cursor < popped.size() && silo.back() == popped[cursor]){
                silo.pop_back();
                cursor++;
            }
        }
        return silo.empty();
    }
};
