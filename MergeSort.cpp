#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r)
{
  int i=l;
  int j=m+1;
  int k=l;
  int temp[1000];
 while(i<=m && j<=r)
 {
     if(arr[i]<arr[j])
     {
         temp[k++]=arr[i++];
     }
     else
     {
         temp[k++]=arr[j++];
     }
 }
  while(i<=m)
 {
     temp[k++]=arr[i++];
 }
 while(j<=r)
 {
     temp[k++]=arr[j++];
 }
 for(int i=l;i<=r;i++)
 {
     arr[i]=temp[i];
 }
}
void mergeSort(int a[],int s,int e)
{
	if(s<e)
	{
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,mid,e);
    }
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[]={38,27,43,3,9,82,10};
	mergeSort(a,0,6);
	print(a,7);
}
