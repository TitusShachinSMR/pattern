#include<stdio.h>
#include<math.h>
int main()
{ int i,j,k;char a[5][5];
for(j=0;j<5;j++)
{ a[0][j]=83;
}
for(i=1;i<5;i++)
{a[i][4]=83;
}
for(j=3;j>=0;j--)
{a[4][j]=83;
}
for(i=3;i>=1;i--)
{a[i][0]=83;
}
for(i=1;i<=3;i++)
{for(j=1;j<=3;j++)
{a[i][j]=' ';
}
}

for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{printf("%c ",a[i][j]);
}
printf("\n");
}

}
