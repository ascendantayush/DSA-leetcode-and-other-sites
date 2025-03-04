int search(int* nums, int numsSize, int target) {
    int high = numsSize - 1 ;
    int low = 0 ;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid]==target){
            return mid;
        }else if(target < nums[mid]){
            high = mid - 1;
        }else{
            low = mid + 1 ;
        }
    }
    return -1;
}
