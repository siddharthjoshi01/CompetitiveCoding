#include<iostream>
#include<array>

using namespace std;

unsigned int n;
int notes[5] = {100, 20, 10, 5, 1};
int sum = 0;

int main(){
    cin >> n;

    for(int i = 0; i < 5; i++){
        if(n >= notes[i]){
            int num = n/notes[i];
            int rem = n%notes[i];
            sum += num;
            n = rem;
        }
        else{
            continue;
        }
    }
    cout << sum << endl;
    return 0;
}