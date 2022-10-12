#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i< n; score_i++){
       cin >> score[score_i];
    }
    
    int maximum= score[0];
    int minimum = score[0];

    int counta=0;
    int countb=0;
    for(int i=1;i<n;++i){
        if(score[i]>maximum){
            ++counta;
            maximum=score[i];
        }
        if(score[i]<minimum){
            ++countb;
            minimum=score[i];
        }
    }
    
    cout << counta << " "<<countb;
    return 0;
}

https://www.hackerrank.com/challenges/breaking-best-and-worst-records/submissions/code/295533924
