#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[0],tmin=1000000000,tmax=0,t1=0,t2;
	for (int i = 0; i < n; i++) if (a[i]>=max) {max=a[i]; t1=i;}
	for (int i = 0; i < n; i++) if (a[i]<=min) {min=a[i]; t2=i;}
	for (int i = 0; i < n ; i++) if( (i!=t1) && a[i]<=max && a[i]>tmax) tmax=a[i];
	for (int i = 0; i < n; i++) if( (i!=t2) && a[i]>=min && a[i]<tmin) tmin=a[i];
	
	t1=(max-min);
	t2=(tmax-min);
	int t3=(max-tmin);
	
	if (t1<=t2)
	{
		if (t1<=t3)
		{
			printf("\n%d\n",t1);
		}
		else printf("\n%d\n",t3 );
	}
	else if(t2<t3) printf("\n%d\n",t2 );
	if (n<3) printf("0");
	return 0;
	
}

