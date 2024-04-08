#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    int h = 0;
    int a[4] = {1,2,0,0};
    int cur_m=3;
    int k = 34;
    int n = sizeof(a)/sizeof(a[0]);

    cout << n;

    for(int i=0; i<n; i++){
        h = h + a[i]*pow(10,cur_m);
        cur_m = cur_m -1; 
    }

    int r, l; //求和，输出长度
    r = h+k;

    if(r>=pow(10,n)){
        l = n+1;
    } else{ l = n;}

    int res[l];
    cur_m = l-1;

    for(int j=0; j < l; j++){
        if(j==l-1){ res[j]= r;}
        else{
            int temp = floor(r/pow(10,cur_m));
            res[j] = temp;
            r = r - res[j]*pow(10,cur_m);
            cur_m = cur_m-1;
            // cout << r;
        }
    }

    for(int i = 0; i<4; i++){
        cout << res[i];
        cout << '+';
    }



}