#include <iostream>
#include <algorithm>  // this header is required for std::sort to work
#include <string>

using namespace std;

string guest, host, pile;

int main()
{
    cin >> guest >> host >> pile;

    string string_1 = guest + host;
    sort(string_1.begin(), string_1.end());

    sort(pile.begin(),pile.end());

    bool flag = true;

    if(string_1.length() != pile.length()){
        cout << "NO" << endl;
    }
    else{
        for(int i = 0; i < pile.length(); i++){
            if(string_1[i] == pile[i]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
     
        if(flag == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}