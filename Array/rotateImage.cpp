void swap(int &v1, int &v2){ 
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}
void rotate(vector<vector<int>>& matrix) {
    int midSize = matrix.size()/2;
    int col_limit = 0;
    for (int row=0;row!=matrix.size();++row){
        col_limit++;
        for (int col=0;col!=col_limit;++col){
            //cout<<"row, col: "<<row<<","<<col<<endl;
            swap(matrix[row][col], matrix[col][row]);
            //cout<<"swap: "<<matrix[row][col]<<","<<matrix[col][row]<<endl;
        }   
    }
    for (int row=0;row!=matrix.size();++row){
        for (int col=0;col!=midSize;++col){
            swap(matrix[row][col], matrix[row][matrix.size()-col-1]);
        }   
    }
}