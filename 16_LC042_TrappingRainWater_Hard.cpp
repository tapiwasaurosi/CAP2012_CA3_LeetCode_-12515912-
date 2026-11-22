class Solution {
public:
    int trap(vector<int>& height) {
        int west = 0;
        int east = static_cast<int>(height.size()) - 1;
        int peakWest = 0;
        int peakEast = 0;
        int basin = 0;

        while (west < east) {
            if (height[west] < height[east]) {
                if (height[west] >= peakWest) {
                    peakWest = height[west];
                } else {
                    basin += peakWest - height[west];
                }
                west++;
            } else {
                if (height[east] >= peakEast) {
                    peakEast = height[east];
                } else {
                    basin += peakEast - height[east];
                }
                east--;
            }
        }
        return basin;
    }
};
