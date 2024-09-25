class Solution {
    public boolean checkString(String s) {
        int a = s.lastIndexOf("a");
        int b = s.indexOf("b");
        if(a<b || b==-1 || a==-1)
        {
            return true;
        } 
        return false;
    }
}