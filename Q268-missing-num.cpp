#include<iostream>
#include<vector>
using namespace std;

//  to find the missing number from 1 to n- 

    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum = 0;
        for(int i =0 ;i<n;i++){
            sum = sum + nums[i];
        }

        int totalSum = ((n)*(1+n))/2;
        int ans = totalSum - sum ;
        return ans;

};

int main()
{

    vector<int> nums = {0, 1, 2, 4};
    int missingNum = missingNumber(nums);
    cout << "Missing Number: " << missingNum << endl;
    return 0;
 return 0;
}