#include<iostream>
#include<string>

using namespace std;

int n;
string text;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> text;
        if(text.length()>10){
            cout << text[0] << text.length()-2 << text[text.length()-1] << endl;
        }
        else{
            cout << text << endl;
        }
    }
}