#include <stdio.h>

void count_freq(int a[], int n) {
    int i,j;
    int visited[n];

   for (i = 0; i < n; i++)
        visited[i] = 0;

    for (i=0;i<n;i++){
        if(visited[i]==1)
            continue;
   int count=1;
   for (j=i+1;j<n;j++){
        if(a[i]==a[j])
        {

            count++;
            visited[j]=1;
        }
    }
    printf("%d %d\n",a[i],count);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    
    for (i=0;i<n; i++)
        scanf("%d", &a[i]);

    count_freq(a, n);}