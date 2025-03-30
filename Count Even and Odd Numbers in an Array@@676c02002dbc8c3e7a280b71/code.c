#include<stdio.h>
void main()
{
int N;
scanf("%d",&N);

int arr[N],i,count1=0,count2=0;
for (int i=0;i<N;i++)
    scanf("%d",&arr[i]);

for (int i=0;i<N;i++){
    if (arr[i]%2==0)
       count1++;
    else
       count2++;
}
printf("%d ",count1);
printf("%d",count2);
  
}

