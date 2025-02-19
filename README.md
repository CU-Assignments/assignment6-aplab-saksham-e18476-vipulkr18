[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/1kpoZW2W)
Problem-1: Convert Sorted Array to Binary Search Tree

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

![image](https://github.com/user-attachments/assets/580c972f-aa01-442c-8579-d7d6be2e306e)





Example 1:




Input: nums = [-10,-3,0,5,9]

Output: [0,-3,9,-10,null,5]

Explanation: [0,-10,5,null,-3,null,9] is also accepted:



![image](https://github.com/user-attachments/assets/e6ff2804-bb6e-4ad7-84af-3e5dc8d71ffd)





Example 2:




![image](https://github.com/user-attachments/assets/c95f9c6e-0103-4191-a289-745480dfeb54)






Input: nums = [1,3]

Output: [3,1]

Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 



Constraints:

1 <= nums.length <= 104

-104 <= nums[i] <= 104

nums is sorted in a strictly increasing order.








Problem-2: Maximum Depth of Binary Tree





Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 



Example 1:





![image](https://github.com/user-attachments/assets/d0a61fb4-ea62-464b-a2c3-d030e662db05)



Input: root = [3,9,20,null,null,15,7]

Output: 3








Example 2:

Input: root = [1,null,2]

Output: 2
 




Constraints:

The number of nodes in the tree is in the range [0, 104].

-100 <= Node.val <= 100




