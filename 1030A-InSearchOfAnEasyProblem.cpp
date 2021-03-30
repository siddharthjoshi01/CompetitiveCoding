#include<iostream>

using namespace std;

int n, choice;
bool flag = true;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> choice;

        if(choice != 0){
            flag = false;
            break;
        }
    }

    if(flag == false){
        cout << "HARD" << endl;
    }
    else{
        cout << "EASY" << endl;
    }
    return 0;
}