#include <stdio.h>

int main()
{
  int i =0, k, first = -1, last = -1, n;
	scanf("%d", &n);
	scanf("%d", &k);
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
  int l =0, r=(n-1), m;

  while(l<=r){
    m = (l+r)/2;
    if(arr[m]<k){
      l=m+1;
    } else if(arr[m]>k){
      r=m-1;
    }else{
      for(i=m;arr[i]==k;i--){
        first = i;
      }
      for(i=m; arr[i]==k; i++){
        last=i;
      }
      l=r+1;
    }

  }
  printf("%d %d", first, last);

}