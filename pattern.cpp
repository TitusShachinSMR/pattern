#include<stdio.h>
#include<math.h>
int main()
{ int i,j,k,n,m;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=5-i;j>=1;j--)
{printf(" ");
}
for(k=1;k<=2*i-1;k++){

{ printf("%d",abs(i-k));
}
}
printf("\n");
}

}
