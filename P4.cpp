#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target) {
                return i;  // return index if found
            }
        }
        return -1;  // return -1 if not found
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    int index = sol.linearSearch(nums, target);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
