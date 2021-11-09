#include<iostream>
#include<map>
using namespace std;

void mapDemo(){
    map <int, int > A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100000231] = 1;

    for(auto x : A)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;


    map <int, char> cnt;

    string x = "prazzaldebnath";
    int count = 1;
    for(char c : x)
    {
        cnt[count] = c;
        count++;
    }
    cout << endl;
    for(auto x : cnt)
    {
        cout << x.first << " " << x.second << endl;
    }

    for(auto x : cnt)
    {
        if(x.second == 'z'){
            cout << "z is present"  << endl;
        }
        if(x.second == 'a'){
            cout << "a is present" << endl;
        }
    }

}
int main()
{
    mapDemo();
}
