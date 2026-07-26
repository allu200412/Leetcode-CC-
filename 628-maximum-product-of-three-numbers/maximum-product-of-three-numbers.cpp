class Solution {
public:
    int maximumProduct(vector<int>& nums)
    {
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Store the size of the array
        int n = nums.size();

        // Step 3: Product of the three largest numbers
        int product1 = nums[n-1] * nums[n-2] * nums[n-3];

        // Step 4: Product of the two smallest and the largest
        int product2 = nums[0] * nums[1] * nums[n-1];

        // Step 5: Return the larger product
        return max(product1, product2);
    }
};