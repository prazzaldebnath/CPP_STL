#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//  final vector
bool function(int x, int y)
{

    return x > y;
}

void vectorDemo()
{
    vector <int> A = {11, 2, 3, 4};

    cout << A[1] << endl;
    cout << endl;

    sort(A.begin(), A.end()); //O(NlogN)

    // printing the values in A
    for(int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;
    // 2, 3, 11, 14
    //O(NlogN)

    bool present;
    present = binary_search(A.begin(), A.end(), 2); // true
    cout << present << endl; //1

    present = binary_search(A.begin(), A.end(), 5); // false
    cout << present << endl; // 0

    A.push_back(100); // 2, 3, 11, 14, 100
    A.push_back(100); // 2, 3, 11, 14, 100, 100
    A.push_back(100); // 2, 3, 11, 14, 100, 100, 100
    A.push_back(100); // 2, 3, 11, 14, 100, 100, 100, 100
    A.push_back(100); // 2, 3, 11, 14, 100. 100, 100, 100, 100
    A.push_back(123); // 2, 3, 11, 14, 100. 100, 100, 100, 100, 123
    A.push_back(130); // 2, 3, 11, 14, 100. 100, 100, 100, 100, 123, 130

    cout << endl;
    for(int x : A)
    {
        cout << x << " ";
    }
    cout << endl; // 2, 3, 11, 14, 100. 100, 100, 100, 100, 123, 130
    cout << endl;

    present = binary_search(A.begin(), A.end(), 100); // true
    cout << "100 is present if result will be 1 otherwise 0:  " << present << endl;
    cout << endl;

    //lower bound and upper bound

    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // >=

    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // >

    cout << "Two iterator value is: " << *it << " " << *it2 << endl; // 100, 123
    cout << endl;
    cout << "The difference between two iterator position is: " << it2 - it << endl; //5
    cout << endl;

    // sorting in reverse order
    sort(A.begin(), A.end(), function);
    vector<int>::iterator it3;

    cout << "Values in reverse order: " << endl;
    for(it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Iterate by reference" << endl;
    //iterate by reference
    for(int &x: A)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
    cout << endl;

    cout << "If the values are accessed by reference then the original values will be changed" << endl;
    //printing out the values
    for( int x : A)
    {
        cout << x << " ";
    }
    cout << endl;



}
int main()
{
    vectorDemo();
}
