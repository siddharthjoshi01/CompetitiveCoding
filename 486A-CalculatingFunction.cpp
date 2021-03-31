//if same corresponding digits, the digit is 0; else 1
#include <iostream>


using namespace std;

long long n, ans;

int main()
{

    cin >> n;

    if(n % 2 == 0){
        ans = n / 2;
    } 
    else{
        ans = ((n + 1) / 2) * (-1);
    } 
    
    cout << ans << endl;
    return 0;
}