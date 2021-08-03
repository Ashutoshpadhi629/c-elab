#include<iostream>
#include<conio.h>
int bubbleSort(int arr[],int n)
{
  for(int i=n;i>0;i--)
  {
      for(int j=0;j<i;j++)
      {
          if(arr[j]>arr[j+1])
          {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
      }
  }
return 0 ;}
int main()
{
    int n;
 std::cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     std::cin>>arr[i];
 }
    bubbleSort(arr,n);
  for(int i=0;i<n;i++)
 {
     std::cout<<arr[i]<<" ";
 }
 getch();
    return 0;
}