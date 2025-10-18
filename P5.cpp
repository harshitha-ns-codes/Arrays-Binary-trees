#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;  
        vector<int> unionArr;

        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                if (unionArr.empty() || unionArr.back() != nums1[i])
                    unionArr.push_back(nums1[i]);
                i++;
            }
            else if (nums2[j] < nums1[i]) {
                if (unionArr.empty() || unionArr.back() != nums2[j])
                    unionArr.push_back(nums2[j]);
                j++;
            }
            else { // nums1[i] == nums2[j]
                if (unionArr.empty() || unionArr.back() != nums1[i])
                    unionArr.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        while (i < n1) {
            if (unionArr.empty() || unionArr.back() != nums1[i])
                unionArr.push_back(nums1[i]);
            i++;
        }

        while (j < n2) {
            if (unionArr.empty() || unionArr.back() != nums2[j])
                unionArr.push_back(nums2[j]);
            j++;
        }

        return unionArr;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};
    
    vector<int> result = sol.unionArray(nums1, nums2);
    
    cout << "Union of arrays: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}
