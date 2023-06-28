#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    unordered_set<int> mySet = {1, 2, 3, 4, 5, 3, 3};
    if (mySet.count(3) > 0) 
    {
        cout << mySet.count(3) << endl;
    } 
    else 
    {
        cout << "Element 3 does not exist in the unordered_set." << endl;
    }
    return 0;
}