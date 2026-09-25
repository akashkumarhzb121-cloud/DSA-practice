class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int n= matrix.size();
     int m=matrix[0].size();
     int total= n*m;
     int count=0;

     vector<int>ans;
     int rowstart=0;
     int rowend=n-1;
     int colstart=0;
     int colend=m-1;

     while(count<total){
        //rowstart, colstart-->colend
        for(int i=colstart; i<=colend;i++){
            ans.push_back(matrix[rowstart][i]);
            count+=1;
        }
        rowstart +=1;
        if(count == total) break;

        //colend, rowstart-->rowend
        for(int i=rowstart; i<=rowend;i++){
            ans.push_back(matrix[i][colend]);
            count+=1;
        }
        colend -=1;
        if(count == total) break; 

        //rowend, colend-->colstart
        for(int i=colend; i>=colstart;i--){
            ans.push_back(matrix[rowend][i]);
            count+=1;
        }
        rowend -=1;
        if(count == total) break;

        //colstart, rowend-->rowstart
        for(int i=rowend; i>=rowstart;i--){
            ans.push_back(matrix[i][colstart]);
            count+=1;
        }
        colstart +=1;
        if(count == total) break;                
     }   
     return ans;
    }
};