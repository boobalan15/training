class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int sv=nums.size();
       int count1=0,count2=0,num1=-123,num2=-123,i;
    for(i=0;i<sv;i++)
    {
       if(nums[i]==num1)
          count1++;
        else if(nums[i]==num2)
          count2++;  
        else if(count1==0)
        {
        num1=nums[i];
        count1=1;
        }
        else if(count2==0)
        {
        num2=nums[i];
        count2=1;
        }
        else
        {
        --count1;
        --count2;
        }
    }
    vector<int>ans;
    count1=count2=0;
    for(i=0;i<sv;i++)
    {
      if(nums[i]==num1)
      count1++;
      if(nums[i]==num2)
      count2++;
    }
    if(count1>sv/3)
    ans.push_back(num1);
    if(count2>sv/3)
    ans.push_back(num2);
    
    
    return ans;     
    }       
};
