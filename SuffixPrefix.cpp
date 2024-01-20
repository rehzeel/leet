
        // suffix prefix approach

        int n = arr.size();
        vector<int> suff(n,INT_MAX);
        vector<int> pref(n,INT_MAX);

        int ans = 0;

        // Suff Pref Calculator in one loop
        for(int i = 0; i<n; i++)
        {
            if(i == 0)
            {
                pref[i] = arr[0];
                suff[n-1-i] = arr[n-1];
                continue;
            }

            pref[i] = min(arr[i],pref[i-1]);
            suff[n-1-i] = min(suff[n-i],arr[n-1-i]);
        }