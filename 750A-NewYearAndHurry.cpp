//n = no. of problems in contest
//k = no. of minutes from home to party
//5*i minutes to solve i'th problem

#include<iostream>
#include<vector>

using namespace std;

int n, k, tot_time = 4*60; //minutes

int main()
{
    cin >> n >> k;

    int rem_time = tot_time - k; //minutes
    vector<int> prob_time;

    for(int i = 1; i <= n; i++)
    {
        prob_time.push_back(5*i);
    }

    int prob = 0;

    for(int i = 0; i < prob_time.size(); i++)
    {
        rem_time -= prob_time[i];
        if(rem_time >= 0)
        {
            prob += 1;
        }
    }

    cout << prob << endl;
    return 0;
}