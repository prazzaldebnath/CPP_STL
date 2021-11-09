#include<iostream>
#include<iomanip>
#include<set>
using namespace std;


void PowerOfStl()
{
    /* [x, y]
        add[2, 3]
        add[10, 20]
        add [30, 400]
        give me the interval 13
    */

    set <pair <int, int >> s;
    s.insert({401, 450});
    s.insert({10, 20});
    s.insert({2, 3});
    s.insert({30, 400});
    //2, 3
    //10, 20
    //30, 400
    //401, 450


    int point = 401;
    auto it = s.upper_bound({point, INT_MAX});
    if(it == s.begin())
    {
        cout << " The given point is not lying in any interval..." << endl;
        return;
    }
    it--;

    pair<int, int>current = *it;
    if(current.first <= point && point <= current.second)
    {

        cout << " yes its present: " << current.first << " " << current.second << endl;
    }
    else
    {
        cout << " the given point is not lying in any interval... " << endl;
    }
}

int main()
{
    //C++ STL
    PowerOfStl();

}
