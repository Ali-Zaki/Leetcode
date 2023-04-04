bool yes(vector<int>&ribbons,int md,int k)
{	
	int curr_rib = 0;
	for(int ri : ribbons){
		curr_rib+=ri/md;
	}
	return(curr_rib >= k);
}
    int maxLength(vector<int>& a, int k) {
        	long long mx= (long long)(accumulate(a.begin(),a.end(),0LL));
	long long mn=1;
	// mx+=mx%2;
	if (mx < k)
		return 0;
	mx/=k;
	mx++;
	while(mn+1<mx){
		long long md=(mn+mx)/2;
		if(yes(a,md,k))
		{
			mn=md;
		}
		else
		{
			mx=md;
		}
	}
	return (mn);  
  }
