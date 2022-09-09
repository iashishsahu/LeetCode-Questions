class Solution {
public:
    long long smallestNumber(long long num) {
        long long ans;
	vector<int>arr(10,0);
	int ve=1;
	if(num<0){
		ve=-1;
		num*=-1;
	}
	while(num){
		arr[num%10]++;
		num=num/10;
	}
	if(ve==1){
		long long ans=0;
		for(int i=1;i<10;i++){
			if(arr[i]){
				arr[i]--;
				ans=i;
				break;
			}
		}
		for(int i=0;i<10;i++){
			while(arr[i]){
				arr[i]--;
				ans=ans*10+i;
			}
		}
		return ans;
	}
	if(ve==-1){
		long long ans=0;
		for(int i=9;i>=1;i--){
			if(arr[i]){
				arr[i]--;
				ans=i;
				break;
			}
		}
		for(int i=9;i>=0;i--){
			while(arr[i]){
				arr[i]--;
				ans=ans*10+i;
			}
		}
		return ans*-1;
	}
	return 0;
    }
};