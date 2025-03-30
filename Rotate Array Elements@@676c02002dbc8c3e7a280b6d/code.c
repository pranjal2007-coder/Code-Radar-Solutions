// Your code here...
#include<stdio.h>
int main()
{
int N,ele,posi;
scanf("%d",&N);

int arr[N],i;

for (int i=0;i<N;i++)
    scanf("%d",&arr[i]);

printf("New element: ");
scanf("%d%d",&ele);

printf("Position:");
scanf("%d",&posi);

N++;


for (int i=N-1;i>posi;i--)
    arr[i]=arr[i-1];

    arr[posi] = ele;

for (int i=0;i<N;i++)
    printf("%d ",arr[i]);

    return 0;
}

