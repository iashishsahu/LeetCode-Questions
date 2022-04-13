class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int> (n,0));
        int num=1;
         int T,B,L,R,dir;
    T=0;
    B=matrix.size()-1;
    L=0;
    R=matrix[0].size()-1;
    dir=0;
    int i;
    vector<int> ans;
    
        while(T<=B && L<=R)
        {
            if(dir==0)
            {
                for(i=L;i<=R;i++)
                    matrix[T][i]=num,num++;
                T++;
            }
            else if(dir==1)
            {
                for(i=T;i<=B;i++)
                    matrix[i][R]=num,num++;
                R--;
            }
            else if(dir==2)
            {
                for(i=R;i>=L;i--)
                    matrix[B][i]=num,num++;
                B--;
            }
            else if(dir==3)
            {
                for(i=B;i>=T;i--)
                    matrix[i][L]=num,num++;
                L++;
            }
            dir=(dir+1)%4;
        }
        return matrix;
    }
    
};