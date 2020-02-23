#include <vector>

class TwoSum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int>::iterator n1, n2;
        int index[2] = {0, 0};
        
        for (n1 = nums.begin(); n1 < nums.end(); n1++){
            n2 = n1+1;
            index[1] = index[0] + 1;
            while (n2 < nums.end()){
                if ((*n1 + *n2) == target){
                    return std::vector<int> { index[0], index[1]};
                }
                n2++;
                index[1]++;
            }
            index[0]++;
        }
        return std::vector<int> {};
    }
};