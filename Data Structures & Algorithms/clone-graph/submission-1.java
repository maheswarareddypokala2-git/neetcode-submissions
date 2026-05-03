/*
Definition for a Node.
class Node {
    public int val;
    public List<Node> neighbors;
    public Node() {
        val = 0;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val) {
        val = _val;
        neighbors = new ArrayList<Node>();
    }
    public Node(int _val, ArrayList<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
}
*/

class Solution {
    public Node cloneGraph(Node node) {
        if(node == null) return null;
            Queue<Node> que = new LinkedList<>();
            Map<Node,Node> mapping = new HashMap<>();
            que.offer(node);
            mapping.put(node,new Node(node.val));
            while(!que.isEmpty()){
                Node curNode = que.poll();
                for( Node nei : curNode.neighbors){
                    if(!mapping.containsKey(nei)){
                    mapping.put(nei,new Node(nei.val));
                     que.offer(nei);
                    }
                    mapping.get(curNode).neighbors.add(mapping.get(nei));
                }
            }
            return mapping.get(node);
    }
}