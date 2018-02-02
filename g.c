#include<stdio.h>
int main()
{
chr c;
printf("enter a charecter:");
scanf("%c",&c);
if( (c>='a' &&  c<='z') || (c>='A' && C<='Z') )
printf("%c is an alphabet.",c);
else
printf("c is not an alphabet.",c);
return 0;
}
