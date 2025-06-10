function findMedianSortedArrays(nums1, nums2) {
    let A = nums1;
    let B = nums2;

    if (A.length > B.length) {
        [A, B] = [B, A];
    }

    const total = A.length + B.length;
    const half = Math.floor(total / 2);

    let l = 0;
    let r= A.length;

    while (true) {
        const i = Math.floor((l + r) / 2);
        const j = half - i;

        const Aleft = (i > 0) ? A[i - 1] : -Infinity;
        const Aright = (i < A.length) ? A[i] : Infinity;
        const Bleft = (j > 0) ? B[j - 1] : -Infinity;
        const Bright = (j < B.length) ? B[j] : Infinity;

        if (Aleft <= Bright && Bleft <= Aright) {
            if (total % 2 === 1) {
                return Math.min(Aright, Bright);
            } else {
                return (Math.max(Aleft, Bleft) + Math.min(Aright, Bright)) / 2;
            }
        } else if (Aleft > Bright) {
            r = i - 1;
        } else {
            l = i + 1;
        }
    }
}
