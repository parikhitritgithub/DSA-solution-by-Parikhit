class Solution {
public:
    int trap(vector<int>& height) {
        int  maxleft= 0 , maxright = 0 ;
        int  max_height = 0;
        int n = height.size();
        int water = 0  ;
        int  index = 0 ; 
        for(int i = 0 ; i < n   ; i++){
            if(height[i]> max_height){
                  max_height = height[i];
            index = i ;
            }
         
        }
        // left side
        for(int i = 0 ; i<index ; i++){
            if(maxleft>height[i]){
            water += maxleft - height[i];
            }else{
            maxleft = height[i];
        } 
        }
        // right side 
        for(int i = n-1 ; i> index ; i--){
            if(maxright>height[i]){

                water += maxright - height[i];
            }else{
            maxright = height[i];
            }
        }
        return water ; 

        
    }
};