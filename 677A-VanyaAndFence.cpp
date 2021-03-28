#include<iostream>
#include<vector>

using namespace std;

int n, h, height, width = 0;

int main(){
    cin >> n >> h;
    
    for(int i = 0; i < n; i++){
        cin >> height;
        
        if(height<=h){
            width += 1;
        }
        else{
            width += 2;
        }
    }

    cout << width << endl;

    return 0;
}