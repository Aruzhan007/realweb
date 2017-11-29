#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<int> prime;
bool isPrime(int x){
	if(x==1)return false;
	bool res=true;
	for(int i=2;i<=sqrt(x);++i){
		if(x%i==0){
			res=false;
			break;
		}
	}
	return res;
}
int main(){
	int n;
	cin>>n;
	int k=2;
	while(prime.size()!=n){
		if(isPrime(k)){
			prime.push_back(k);
		}
		k++;
	}
	for(int i=0;i<n;++i){
		cout<<prime[i]<<" ";
	}
	cout<<endl;
	return 0;
}