#include<stdio.h>

 void main()
 {
  int arr[20],no;
  printf("Enter size of array: ");
  scanf("%d",&no);
  printf("Enter any %d elements in array: ",no);
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
  printf("Duplicate elements are: ");
  for(int i=0; i<no; i++)
   {
    for(int j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d ",arr[i]);
    }
   }
   }
 }