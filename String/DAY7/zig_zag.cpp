class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows==1)
            return s;
        
        int len=s.length();
        int pos=numRows-1;
        int k=0,col;
        
        //create a new array with given numrows and len of col
        
        char A[numRows][len];
        string res;
        
        for(int j=0;j<len;j++){
            if(k>=len){
                col=j;
                break;
            }
            
            if(pos == 0)
                pos=numRows-1;
            if(pos== numRows-1){
                for(int i=0;i<numRows;i++){
                    if(k<len)
                        A[i][j]=s[k++];
                    else
                        A[i][j]='$';
                }
            }
            else{
                 for(int i=0;i<numRows;i++){
                     if(pos == i and k<len)
                         A[i][j]=s[k++];
                     else 
                         A[i][j]='$';
                 }
            }
            pos--;
        }
        
        for(int i=0;i<numRows;i++){
            for(int j=0;j<col;j++){
                if(A[i][j]!='$')
                    res=res+A[i][j];
            }
        }
        return res;
    }
};