class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=i; j<matrix.size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            
        }

      
            int start =0;
            int end=matrix.size()-1;

        int n = matrix.size();

for(int i = 0; i < n; i++){

    int start = 0;
    int end = n - 1;

    for(int j = 0; j < n/2; j++){

        swap(matrix[i][start], matrix[i][end]);

        start++;
        end--;
    }
}
        cout<<endl;
    }
};