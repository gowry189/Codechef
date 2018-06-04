#include <stdio.h> 
 
int main() {
	int tc;
	scanf("%d", &tc);
	while (tc--) 
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int rem = a%b;
		printf("%d\n", rem);
	}
 
	return 0;
}  
