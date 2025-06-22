class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int deficit = 0;
        int balance = 0;
        int start = 0;

        for(int i = 0; i<gas.size(); i++){
            int temp = balance + gas[i] - cost[i];
            if(temp < 0){
                deficit += abs(temp);
                start = i + 1;
                balance = 0;
            }
            else{
                balance = temp;
            }
        }
        if(balance - deficit >= 0){
            return start;
        }
        else{
            return -1;
        }
    }
};