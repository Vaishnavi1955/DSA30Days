#include<iostream>
using namespace std;

int maxconsecutive(int nums[],int n){
	int count=0;
	int maxi=0;
	for(int i=0;i<n;i++){
		if(nums[i]==1){
			count++;
			maxi=max(maxi,count);
		}
		else{
			count=0;
		}
	}
	return maxi;
}
int main(){
	int nums[]={1,0,1,1,1,0,1,1,0,1,1,1,1,0};
	int n=sizeof(nums)/sizeof(nums[0]);
	int result=maxconsecutive(nums,n);
	cout<<"Maximum Consecutive ones are: "<<result;
}
