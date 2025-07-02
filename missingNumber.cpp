#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(int nums[],int n) {
       
        int sum=n*(n+1)/2;
        int s2=0;
        for(int i=0;i<n-1;i++){
            s2+=nums[i];
        }
        return sum-s2;
    }
};
int main(){
	int nums[]={1,2,4,6};
	int n=sizeof(nums)/sizeof(nums[0]);
	Solution s1;
	int result=s1.missingNumber(nums,n+1);
	cout<<"Missing number is: "<<result;
	
	
}
