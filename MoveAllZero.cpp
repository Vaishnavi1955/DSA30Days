#include<iostream>
using namespace std;
 void moveAllZeros(int a[],int n){
 	int j=-1;
 	for(int i=0;i<n;i++){
 		if(a[i]==0){
 			j=i;
 			break;
		 }
	 }
	 if(j==-1) return ;
	 for(int i=j+1;i<n;i++){
	 	if(a[i]!=0){
	 		swap(a[i],a[j]);
	 		j++;
		 }
	 }
 }
 int main(){
 	int a[]={1,2,0,3,0,4,50,0,4,2,0};
 	int n=sizeof(a)/sizeof(a[0]);
 	moveAllZeros(a,n);
 	for(int i=0;i<n;i++){
 		cout<<a[i]<<" ";
	 }
 }
