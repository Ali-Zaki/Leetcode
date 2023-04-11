class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
	vector<int> ans ;
	int inda =0;
	int indb =0;
	while(inda < a.size() and indb < b.size())
	{
		if (a[inda] > b[indb])
		{
			ans.push_back(b[indb]);
			indb++;
		}
		else if (a[inda] <= b[indb])
		{
			ans.push_back(a[inda]);
			inda++;
		}
	}
	while(inda < a.size())
	{
		ans.push_back(a[inda]);
		inda++;
	}
	while(indb < b.size())
	{
		ans.push_back(b[indb]);
		indb++;
	}
	for (auto l:ans){
		cout<<l<<' ';
	}
	cout<<endl;
	int mid = (a.size()+b.size());
	if (mid%2==0)
	{
		int mid1 = mid/2;
		return ((double)((ans[mid1]+ans[mid1-1]))/2);
	}
	else
	{
		return (double)ans[mid/2];
	}
    //  return ;   
    }
};
