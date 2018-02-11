#include <bits/stdc++.h>
using namespace std;
#define N 1000000
int bt[N] ;
void update(int ind , int val){
	while(ind < N){
		bt[ind] += val;
		ind += (ind&-ind) ;
	}
}
int query(int ind ){
	int sum = 0;
	while(ind > 0){
		sum += bt[ind] ;
		ind -= (ind&-ind) ;
	}
	return sum ;
}
int main(){
	int n;
	cin >> n;
	for(int i = 1;i<=n;i++){
		update(i , 1) ;
	}
	for(int i = 1;i<=n;i++){
		cout << query(i ) << endl ;
	}
}
