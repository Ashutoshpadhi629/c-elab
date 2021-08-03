#include<iostream>
#include<conio.h>
int selectionSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           int temp;
          if(arr[i]>arr[j])
          {
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
       }
   }
   return 0;
}
int main()
{
int n;
 std::cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     std::cin>>arr[i];
 }
 selectionSort(arr,n);
  for(int i=0;i<n;i++)
 {
     std::cout<<arr[i]<<" ";
 }
 getch();
 return 0;
}