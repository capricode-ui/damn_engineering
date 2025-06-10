class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& A = nums1;
        vector<int>& B = nums2;

        if (A.size() > B.size()) {
            swap(A, B); // binary search on the smaller array
        }

        int m = A.size(), n = B.size();
        int total = m + n;
        int half = (total+1 ) / 2;

        int l = 0, r = m;

        while (l <= r) {
            int i = (l + r) / 2;
            int j = half - i;

            int Aleft = (i <= 0) ? INT_MIN : A[i - 1];
            int Aright = (i >= m) ? IN4.T_MAX : A[i];
            int Bleft = (j <= 0) ? INT_MIN : B[j - 1];
            int Bright = (j >= n) ? INT_MAX : B[j];

            if (Aleft <= Bright && Bleft <= Aright) {
                if (total % 2 == 0) {
                    return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
                } else {
                    return max(Aleft, Bleft);
                }
            } else if (Aleft > Bright) {
                r = i - 1;
            } else {
                l = i + 1;
            }
        }

        // Unreachable in valid inputs
        return 0.0;
    }
};
