#include <stdio.h>
#define MAX 20

int max(int a, int b){
	return a>b?a:b;
}

int main(){
	int n, i, j, max_val, ans=0;
	int A[MAX], MAXVAL[MAX];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d",&A[i]);
	}
	MAXVAL[0] = 1;
	for(i=1; i<n; i++){
		max_val=1;
		for(j=0; j<i; j++){
			if(A[j]<A[i]){
				max_val = max(MAXVAL[j]+1, max_val);
			}
		}
		MAXVAL[i] = max_val;
	}
	for(i=0; i<n; i++){
		ans = max(ans, MAXVAL[i]);
	}
	printf("%d", ans);
	return 0;
}