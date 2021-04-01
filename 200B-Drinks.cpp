#include<iostream>
#include<iomanip>

using namespace std;

int n, vol; 
float juice_vol = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> vol;
        juice_vol += vol;
    }

    cout << setprecision(12) << juice_vol/n << endl;

    return 0;
}