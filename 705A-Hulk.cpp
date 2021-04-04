#include<iostream>
#include<cstring>
#include<set>

using namespace std;

int n;

int main(){
    cin >> n;

    if(n == 1){
        cout << "I hate it " << endl;
    }
    else{
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                cout << "I hate ";
                if(i == (n-1)){
                    cout << "it";
                }
                else{
                    cout << "that ";
                }
            }

            else if(i%2 != 0){
                cout << "I love ";
                if(i == (n-1)){
                    cout << "it";
                }
                else{
                    cout << "that ";
                }
            }
        }
    }
    return 0;
}