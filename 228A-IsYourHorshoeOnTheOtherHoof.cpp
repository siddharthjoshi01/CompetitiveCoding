#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int n = 4;
int ans = 0;
vector<int> color;

int main(){
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(count(color.begin(), color.end(), temp)){
            ans+=1;
        }
        else{
            color.push_back(temp);
        }
    }

    cout << ans << endl;
    return 0;
}