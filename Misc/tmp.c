#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t,x,y,z,i,c;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d %d %d",&x,&y,&z);
	    c = ceil(y/z);
	    printf("\nc = %d",c);
	    printf("\n%d",c*x);
	}
	return 0;
}

