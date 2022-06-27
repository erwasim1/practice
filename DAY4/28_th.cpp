 for(int i=0;i<n;i++){
	        prod*=arr[i];
	        maxp=max(maxp,prod);
	        
	        if(prod == 0){
	            prod=1;
	        }
	    }