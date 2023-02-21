//Write a program to print maximum the difference between two elements in an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,j,temp;
	int Max;
	cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]<arr[j])
					{
						//Swapping......
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
	
				}
			}
			Max=arr[1]-arr[5];
			cout<<"\nThe maximum difference is : "<<Max;
			
			return 0;
}