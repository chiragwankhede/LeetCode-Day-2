#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// To find the row with maximum no. of 1, and the row index of that row - 

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat){
    int n= mat.size();
    vector<int> ans ;
    int oneCount = INT_MIN;
    int rowNo = 0;

    for(int i =0;i<n;i++){
        int count = 0;
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j] == 1){
                count++;
            }

        }

        if(count>oneCount){
            oneCount = count ;
            rowNo = i ;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans ;
}


int main() {
    vector<vector<int>> mat = {
        {1, 0, 1, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 1}
    };

    vector<int> result = rowAndMaximumOnes(mat);

    cout << "Row with maximum ones: " << result[0] << endl;
    cout << "Maximum number of ones: " << result[1] << endl;

    return 0;
}