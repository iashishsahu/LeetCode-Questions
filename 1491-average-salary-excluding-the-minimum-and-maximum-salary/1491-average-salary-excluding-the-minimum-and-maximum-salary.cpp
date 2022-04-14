class Solution {
public:
    double average(vector<int>& salary) {
        double sum;
        int c=0;
        sort(salary.begin() , salary.end());
        for (int i =1 ; i<salary.size()-1; i++){
            c++;
            sum += salary[i];
        } 
        return sum/c;
        
    }
};