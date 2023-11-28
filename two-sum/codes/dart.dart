// BruteForce
class Solution {
  List<int> twoSum(List<int> nums, int target) {
    List<int> result = [];
    bool terminate = false;
    for (int x in nums) {
      int x_i = nums.indexOf(x);
      for (int y_i = x_i + 1; y_i < nums.length; y_i++) {
        int y = nums[y_i];
        if (x + y == target) {
          result = [x_i, y_i];
          terminate = true;
        }
        if (terminate) {
          break;
        }
      }
      if (terminate) {
        break;
      }
    }

    return result;
  }
}