class Solution {
public:
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{
vector<bool> res;
int extra=0;
int maximum = *max_element(candies.begin(),candies.end());
for(int i=0;i<candies.size();i++)
{
extra = candies[i]+extraCandies;
if(extra>=maximum)
res.push_back(true);
else
res.push_back(false);
}
return res;
}
};