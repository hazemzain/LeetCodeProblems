class RandomizedSet {
    Set<Integer>MySet=new HashSet<>();

    public RandomizedSet() {
        
    }
    
    public boolean insert(int val) {
        if(MySet.contains(val))
        {
            return false;
        }else
        {
            MySet.add(val);
            return true;
            
        }
        
    }
    
    public boolean remove(int val) {
        if(MySet.contains(val))
        {
            MySet.remove(val);
            return true;
        }else
        {
           
            return false;
            
        }
        
    }
    
    public int getRandom() {
         Random rand = new Random();
         int i = rand.nextInt(MySet.size());
         int c = 0;
        int tr = 0;
        for(int n : MySet) {
            if(c == i) tr = n;
            c++;
        }
        return tr;
        
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */