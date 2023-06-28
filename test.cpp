#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;



// 自定義比較函式
bool compare(int a, int b) {
    return a < b; // 升序排序
}
class Interval {
public:
    int start, end;
    Interval(int start, int end) {
        this->start = start;
        this->end = end;
    }
};

std::ostream& operator<<(std::ostream& os, const Interval& interval) {
    os << "[" << interval.start << ", " << interval.end << "]";
    return os;
}

int main() 
{
    int i=9;
    if(i)
        cout << "o";
    else
        cout << "x";


    return 0;
}