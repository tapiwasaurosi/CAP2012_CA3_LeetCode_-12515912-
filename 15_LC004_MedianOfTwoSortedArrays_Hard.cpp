class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int lenA = static_cast<int>(nums1.size());
       int lenB = static_cast<int>(nums2.size());
       int total = lenA + lenB;
       int cursorA =0;
       int cursorB =0;
       int prevVal =0;
       int currVal =0;
       for (int step =0; step <= total / 2; step++){
        prevVal = currVal;
        if (cursorA < lenA && (cursorB >= lenB || nums1 [cursorA] <= nums2[cursorB])){
            currVal = nums1[cursorA];
            cursorA++;
        }else {
            currVal = nums2[cursorB];
            cursorB++;
        }
       }
       if (total % 2 ==1){
        return static_cast<double>(currVal);
       }
       return (prevVal + currVal) /2.0;

         }
};
