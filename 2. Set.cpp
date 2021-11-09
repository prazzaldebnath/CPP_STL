#include<iostream>
#include<algorithm>
#include<set>
using namespace std;


void setDemo()
{

    // set vector can insert a value in vector and also sort the values in ascending order
    // inserting value in set and printing the set
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for(int x: s)
    {
        cout << x << " ";
    }
    cout << endl << endl;


    // finding a value(-100) is present or not
    cout << "Let's find if -100 is present in the set or not by iteration" << endl;
    auto it = s.find(-100);
    if(it == s.end())
    {
        cout << "-100 is not present in set" << endl;
        cout << "Value of iteration it is: " << *it << endl;
    }
    else
    {
        cout << "-100 is present\n" << endl;
        cout << "Value of iteration it is: "<< *it << endl;
    }
    cout << endl;



    // finding lower bound and upper bound
    auto it2 = s.lower_bound(-1);
    cout << "Lower bound of -1 in this set is: " << *it2 << endl;
    auto it3 = s.upper_bound(-1);
    cout <<  "Upper bound of -1 in this set is: "<< *it3 << endl;
    cout << endl;

    //finding
    cout << "Let's find the upper bound of 2 is present or not: " << endl;
    auto it4 = s.upper_bound(2);
    cout << "Value of iteration is: " << *it4 << endl;
    if(it4 == s.end())
    {
        cout << "Sorry, can't find something like this" << endl;
    }
    else
    {
        cout << "Upper bound of 2 is present" << endl;
    }

    cout << endl;
    cout << "Erase 1 and print the set again: " <<  endl;
    // erase function in sets;
    s.erase(1);
    for(int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

}
int main()
{
    setDemo();
}
