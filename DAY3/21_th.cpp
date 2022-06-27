long long merge(long long arr[],int s,int mid,int e){
    long long inv=0;
    int len1=mid-s+1;
    int len2=e-mid;
    
    int first[len1];
    int second[len2];
    
    int mainarrayindex=s;
    
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    //merge two sorted array
    int i=0,j=0,k=s;
    while(i<len1 && j<len2){
        if(first[i] <= second[j]){
            arr[k++]=first[i++];
        }
        else{
            arr[k++]=second[j++];
            inv += len1-i;
//             k++;
//             j++;
        }
    }
    
    while(i<len1){
         arr[k++]=first[i++];
    }
    while(j<len2){
         arr[k++]=second[j++];
    }
    return inv;
}

long long mergesort(long long arr[],int s, int e){
    long long inv=0;
    if(s<e){
        int mid=(s+e)/2;
        inv+=mergesort(arr,s,mid);
        inv+=mergesort(arr,mid+1,e);
        inv+=merge(arr,s,mid,e);
        
    }
    return inv;
}


long long getInversions(long long *arr, int n){
   return mergesort(arr,0,n-1);
   
}