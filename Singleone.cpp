#include<iostream>
using namespace std;

    int singleNumber(int nums[],int n) {
      
        for(int i=0;i<n;i++){
           int num=nums[i];
           int count=0;
           for(int j=0;j<n;j++){
            if(nums[j]==num){
                count++;
            }
           
           }
             if(count==1) return num;
        }
        return -1;
    }
int main(){
	int nums[]={1,2,2,1,3};
	int n=sizeof(nums)/sizeof(nums[0]);
	int result=singleNumber(nums,n);
	cout<<"Result is"<<result;
}
