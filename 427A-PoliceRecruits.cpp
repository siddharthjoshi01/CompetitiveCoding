#include <iostream>

using namespace std;

int n, hire = 0;
int untreat = 0;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        int current;
        cin >> current;

        if(current > 0){
            hire += current;
        }
        else{
            if(hire > 0){
                hire -= 1;
            }
            else{
                untreat += 1;
            }
        }
    }

    cout << untreat << endl;
    return 0;
}