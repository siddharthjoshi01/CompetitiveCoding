#include<iostream>

using namespace std;

// k is price of 1 banana
// n is the number of dollars he has
// w is the number of bananas he wants

int k, n, w;
int total_price = 0;

int main()
{
    cin >> k >> n >> w;
    int price;
    
    for(int i = 1; i <= w; i++){
        price = k*i;
        total_price = total_price + price;
    }

    int amt = total_price - n;
    
    if(amt < 0){
        cout << 0 << endl;
    }
    else{
        cout << amt << endl;
    }
    
    return 0;
}