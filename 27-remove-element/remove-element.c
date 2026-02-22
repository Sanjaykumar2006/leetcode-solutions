int removeElement(int* nums, int numsSize, int val) {
    int b=0;
    for(int i=0;i<numsSize;i++){
        if(val!=nums[i]){
           nums[b] = nums[i];
            b++;
        }
    }
    return b;
} 
      