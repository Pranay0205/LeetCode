public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
       Dictionary<int, int> dict = new Dictionary<int, int>();

            int[] results = new int[k]; 
            
            for(int i = 0; i < nums.Length; i++)
            {
                if (dict.ContainsKey(nums[i]))
                {
                    dict[nums[i]]++;
                }
                else
                {
                    dict.Add(nums[i], 1);
                }

            }

            PriorityQueue<int,int> priorityQueue= new PriorityQueue<int,int>(); 

            foreach(var key in dict.Keys)
            {
                priorityQueue.Enqueue(key, dict[key]);

                if(priorityQueue.Count > k ) 
                { 
                    priorityQueue.Dequeue();                
                }
            }

            int i2 = k;
            while (priorityQueue.Count > 0)
            {
                results[--i2] = priorityQueue.Dequeue();
            }
            return results;
    }
}