class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
       
       int n = arr.size();
       
       vector<int>res;
       
       queue<int>que;
       
       int left = 0;
       
       for(int right = 0;right<n;right++){
           
           if(arr[right] < 0){
               que.push(arr[right]);
           }
           
           if(right-left+1 == k){
               
               if(!que.empty()){
                   res.push_back(que.front());
               }
               else
               {
                   res.push_back(0);
               }
               
               if( !que.empty() && que.front() == arr[left]){
                   que.pop();
               }
               
               left++;
           }
       }
       
       return res;
        
    }
};
