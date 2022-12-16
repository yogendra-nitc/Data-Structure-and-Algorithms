
class GeneralAlgorithm{
  
  /* Binary Search */
  public int binarySearch(int[] nums, int target) {
          int mid, start=0, end=nums.length-1;
          mid = (start + end)/2;
          while(start<=end){
              mid = (start + end)/2;
              if(nums[mid] == target){
                  return mid;
              } else if(target < nums[mid]) {
                  end = mid-1;
              } else {
                  start = mid+1;
              }
          }
          return -1;
      }
}
