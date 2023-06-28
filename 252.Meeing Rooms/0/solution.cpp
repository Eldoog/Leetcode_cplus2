class Solution {
public:
    bool canAttendMeetings(vector<Interval> &intervals) {
        for (int i = 0; i < intervals.size(); i++) {
            for (int j = i + 1; j < intervals.size(); j++) {
                if (overlap(intervals[i], intervals[j]))
                return false;
            }
        }
        return true;
    }

    bool overlap(Interval i1, Interval i2) {
        return (min(i1.end, i2.end) > max(i1.start, i2.start));
    }
};