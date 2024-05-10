    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
                unordered_map<int,int> m;
        int l=0;
        int sum=0;
         m[0]= -1;
        for(int i=0; i<N;i++){
            sum+=A[i];
            if(sum==K) l=max(i+1,l);
           if(m.find(sum-K)!=m.end()){
                l=max(l,(i-m[sum-K]));
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
        }
        return l;
    } 
