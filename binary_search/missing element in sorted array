    int missingElement(vector<int>& a, int k) {
    int mi  = a[0];
    int ind = 0;
    while(ind < a.size()){
        if (a[ind] != mi){
            k--;
            // mi++;
            // cout<<mi<<endl;
            // ind++;
            // cout<<"lefiheoi "<<ind<<endl;
        }
        else if (a[ind]==mi)
            ind++;
        if (!k)
            break;
        mi++;
        // ind++;
    }
    if (k==0)
        return mi;
    else
        return a[a.size()-1]+k;

    }
