function twoSum(nums, target) {
    const numToIndex = new Map(); // key: number, value: index

    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];

        if (numToIndex.has(complement)) {
            return [numToIndex.get(complement), i];
        }

        numToIndex.set(nums[i], i);
    }

    return []; // No solution found
}