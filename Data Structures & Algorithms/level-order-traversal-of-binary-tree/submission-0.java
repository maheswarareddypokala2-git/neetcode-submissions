/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> que = new LinkedList<>();
        List<List<Integer>> ansList = new ArrayList<>();
        if(root == null) return ansList;
        que.offer(root);
        while(!que.isEmpty()){
            List<Integer> tempList = new ArrayList<>();
            int currSize = que.size();
            while(currSize-- >0){
            TreeNode currRoot = que.poll();
            tempList.add(currRoot.val);
            if(currRoot.left!=null) que.offer(currRoot.left);
            if(currRoot.right!=null) que.offer(currRoot.right);
            }
            ansList.add(tempList);
        }
        return ansList;
    }
}
