#ifndef _LEETCODE_SOLUTION_H
#define _LEETCODE_SOLUTION_H

#include<vector>
#include "common.h"

class Solution_AssginCookies {
public:
     int findContentChildren(std::vector<int>& g, std::vector<int>& s);
};

class Solution_Candy {
public:
    int candy(std::vector<int>& ratings);
};

//Non-overlapping Intervals
class Solution_NonOverlappingInterval {
public:
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals);
};

// Can Place Flowser
class Solution_CanPlaceFlowser {
public:
    bool canPlaceFlowsers(std::vector<int>& flowsered, int n);
};

//167 Two Sum II - Input array is sorted
class Solution_TwoInputII {
public:
    std::vector<int> twoSum(std::vector<int>&numbers, int target);
    std::vector<int> twoSum_Hash(std::vector<int>& numbers, int target);
};

//88. Merge Sorted Array
class Solution_MergeSortedArray {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);
};

//142 Linked List Cycle II
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution_LinkedListCycleII {
public:
    ListNode *detectCycle(ListNode *head);
};

//69 Sqrt(x)
class Solution_Sqrt {
public:
    int mySqrt(unsigned int a);
};

//L448
class Solution_ArrayFindAllNumbersDisappearedInArray {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums);
};

//48
class Solution_RotateImage {
public:
    void rotate(std::vector<std::vector<int>>& matrix);
};

//232 Implement Queue using Stacks

class QueueUsingStacks {
    std::stack<int> in, out;
public:
    QueueUsingStacks();
    void push(int x);
    int pop();
    int peek();
    bool empty();
    void in2out();
};

#endif
