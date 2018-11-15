#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    
    int testcases;
    cin>>testcases;
    while(testcases--){
        long long n;
        cin>>n;
        long long sum = 2;
        for(long long k = 1;k<n;k++){
            sum *= 2;
            if(n <= (k+1)*sum - 1){
                printf("%lld\n", k);
                break;
            }
        }
    }
    return 0;
}
