bool compareIntervals(const Interval& i1, const Interval& i2) {
    return i1.start < i2.start; // 使用 start 屬性進行比較
}

class Solution {
public:
     bool canAttendMeetings(vector<Interval> &intervals)  {
        sort(intervals.begin(), intervals.end(), compareIntervals);

        for (int i = 1 ; i < intervals.size() ; i++) 
        {
           
            if ( intervals[i-1].end >intervals[i].start) {
                return false;
            }
        }

        return true;
    }
};