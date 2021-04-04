#include<iostream>
#include<cstring>
#include<set>

using namespace std;

int n, sum = 0;

int main(){

    cin >> n;
    for(int i = 0; i < n; i++){
        string shape;
        cin >> shape;

        if(shape == "Tetrahedron"){
            sum += 4;
            continue;
        }
        else if(shape == "Cube"){
            sum += 6;
            continue;
        }
        else if(shape == "Octahedron"){
            sum += 8;
            continue;
        }
        else if(shape == "Dodecahedron"){
            sum += 12;
            continue;
        }
        else{
            sum += 20;
            continue;
        }
    }

    cout << sum << endl;
    return 0;
}