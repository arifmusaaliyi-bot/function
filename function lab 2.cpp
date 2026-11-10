#include<iostream>
using namespace std;
void countnumbers(int arr[],int size,int&postive,int&negative,int&zero){
postive=0;
negative=0;
zero=0;
for(int i=0;i<size;i++){
	if(arr[i]>0)
	postive++;
	else if(arr[i]<0)
	negative++;
	else zero++;
}
}
int sumpostive(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		if(arr[i]>0)
		sum+=arr[i];
	}
	return sum;
}
int sumnegative(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		if(arr[i]<0)
		sum+=arr[i];
	}
	return sum;
}
double calculateaverage(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return (double)sum/size;
}
void displayresult(int postive,int negative,int zero,int posSum,int negsum,double average)
{
	cout<<"\nresults"<<endl;
	cout<<"postive numbers:"<<postive<<endl;
	cout<<"negative numbers:"<<negative<<endl;
	cout<<"zero value:"<<zero<<endl;
	cout<<"sum of postive numbers:"<<posSum<<endl;
	cout<<"sum of negative numbers:"<<negsum<<endl;
	cout<<"average:"<<average<<endl;
}
int main(){
	const int size=5;
	int arr[size];
	int postive,negative,zero;
	int posSum,negsum;
	double average;
	cout<<"enter five integer numbers"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	countnumbers(arr,size,postive,negative,zero);
	posSum=sumpostive(arr,size);
	negsum=sumnegative(arr,size);
	average=calculateaverage(arr,size);
	displayresult(postive,negative,zero,posSum,negsum,average);
	
return 0;
}