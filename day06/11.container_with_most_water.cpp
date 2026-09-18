class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int v=0;
        while(r>l)
        {
            if(height[r]>=height[l]&&v<height[l]*(r-l))
            {
                v=height[l]*(r-l);

            }
            else if(r>l&&height[l]>=height[r]&&v<height[r]*(r-l))
            {
                v=height[r]*(r-l);

            }

            if(height[r]>=height[l])
            {
                l++;
            }
            else if(height[l]>=height[r])
            {

                r--;
            }
                
        }
    return v;

        
    }
};
