#include<bits/stdc++.h>
using namespace std;

int nextGap(int gap) 
{ 
	if (gap <= 1) 
		return 0; 
	return (gap / 2) + (gap % 2); 
} 

// Function to merge the arrays
// arr1[], arr2[]: input arrays
// n, m: size of arrays arr1[] and arr2[] respectively
void merge(int arr1[], int arr2[], int n, int m)
{ 
	int i, j, gap = n + m; 
	
	for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) 
	{ 
	    // comparing elements in the first array. 
		for (i = 0; i + gap < n; i++) 
			if (arr1[i] > arr1[i + gap]) 
				swap(arr1[i], arr1[i + gap]); 

		// comparing elements in both arrays. 
		for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++) 
			if (arr1[i] > arr2[j]) 
				swap(arr1[i], arr2[j]); 
        
        // comparing elements in the second array.
		if (j < m) 
		{ 
			
			for (j = 0; j + gap < m; j++) 
				if (arr2[j] > arr2[j + gap]) 
					swap(arr2[j], arr2[j + gap]); 
		} 
	} 
} 
// void a_m(){
//     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt","r",stdin);
//         freopen("output.txt","w",stdout);
//     #endif
// }
int32_t main()
{
    //type your code here
    // a_m();
    int t;
    cin>>t;
    while(t--){
	    
	    int n,m;

	    cin>>n>>m;
	    int arr1[n];
	    int arr2[m];
	    for(int i=0;i<n;i++){
	    	cin>>arr1[i];
	    }
	    for(int i=0;i<m;i++){
	    	cin>>arr2[i];
	    }
	    merge(arr1,arr2,n,m);
	   for(int i=0;i<n;i++){
	    	cout<<arr1[i]<<" ";
	    }
	    cout<<endl;

	    for(int i=0;i<m;i++){
	    	cout<<arr2[i]<<" ";
	    }
    }
    
    
}

