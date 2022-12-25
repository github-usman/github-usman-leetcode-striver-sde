class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int k;
    // cout<<"  start"<<endl;
    int size = matrix.size();
    int temp_arr[size];
    for (int i = 0; i <matrix.size()/2; i++)
        {   
            //   cout<<i<<" "<<endl;
            
             int m =  matrix[i].size()-(i+1);
            for (int j = i; j <m; j++)
                {
                    temp_arr[j] = (matrix[i][j]);
                    // cout<<matrix[i][j]<<" ";
                    // cout<<temp_arr[j]<<" ";
                }
                cout<<endl;
            
                k = i;
                
            for (int j = i; j < m; j++)
                {    
                   

                    swap(temp_arr[j],matrix[k][m]);
                    //  cout<<temp_arr[j]<<" ";
                    k++;
                }
               k = m;
              
            cout<<endl;
             for (int j = i; j < m; j++)
                {   
                    
                    swap(temp_arr[j],matrix[m][k]);
                    //  cout<<temp_arr[j]<<" ";
                    k--;
                }
            
            // left columnai
            // cout<<endl;
             k = m;
            for (int j = i; j <m; j++)
                {   
                   
                    swap(temp_arr[j],matrix[k][i]);
                    //  cout<<temp_arr[j]<<" ";
                    k--;
                }
        
            // upper column
            // cout<<endl;
            // k  = 0;
            for (int j = i; j < m; j++)
                {   
                   
                    swap(temp_arr[j],matrix[i][j]);
                    //  cout<<temp_arr[j]<<" ";
                    // k++;
                }
            //  cout<<"hereii"<<endl;
                // temp_arr.clear();
        }
    }
};