#include <stdio.h>
int sum(int x[],int i){
if(i==0)
return x[i];
return sum(x,i-1)+x[i];
}
int main(){
int a[10],i,n;
n=sizeof(a)/sizeof(a[0]);
printf("Enter %d elements: ",n);
for(i=0;i<10;i++)
   scanf("%2d",&a[i]);
printf("\nThe sum of %d elements is %d.\n",n,sum(a,n-1));
return 0;
}

