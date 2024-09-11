//
// Created by ouyang on 2024/8/26.
//
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素。元素的顺序可能发生改变。然后返回 nums 中与 val 不同的元素的数量。
//假设 nums 中不等于 val 的元素数量为 k，要通过此题，您需要执行以下操作：
//更改 nums 数组，使 nums 的前 k 个元素包含不等于 val 的元素。nums 的其余元素和 nums 的大小并不重要。
//返回 k。
//输入：nums = [3,2,2,3], val = 3
//输出：2, nums = [2,2,_,_]
//解释：你的函数函数应该返回 k = 2, 并且 nums 中的前两个元素均为 2。
//你在返回的 k 个元素之外留下了什么并不重要（因此它们并不计入评测）。
#include <stdio.h>

//int main() {
//    int nums[4] = {3, 5, 5, 3};
//    int val = 5;
//    int count = 0;
//    int i = 0;
//    int j = 0;
//    int size= sizeof (nums)/sizeof (int);
//    while (j < size) {
//        if (nums[j] != val) {
//            nums[i++] = nums[j];
//            count++;
//        }
//        j++;
//    }
//
//    printf("  %d \n", count);
//
//    for (int x = 0; x < 4; ++x) {
//        printf("  %d", nums[x]);
//    }
//
//    return 0;
//}
int main(){
    int num[5]={0};
    int nums[]={3,2,2,3};

    int val=3,k=0;
    int size= sizeof (nums)/sizeof (int);
    for (int i = 0; i < size; ++i) {
        if(nums[i]!=val){
            num[i-1]=nums[i];
            k++;
        }

    }
    printf("k=%d\n",k);
    for (int x = 0; x < 4; ++x) {
        printf("  %d", num[x]);
    }
    return 0;
}