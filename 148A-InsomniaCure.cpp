// k - punch face frying-pan; l - tail shut
// m - paws trampled sharp heels
// n - threaten with mom
// total d dragons


#include<iostream>

int k,l,m,n,d;
int count = 0;

using namespace std;

int main(){
    cin >> k >> l >> m >> n >> d;
    
    if(k == 1 || l == 1 || m == 1 || n == 1){
        count = d;
    }
    else{
        for(int i = 1; i <= d; i++){
            if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
                count += 1;
            }
        }
    }
    cout << count << endl;

    return 0;
}