                     //1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int> &nums) {
        int s=0;
        vector<int> res;
        for(int i=1;i<=nums.size();i++){
            s=0;
            for(int j=0;j<i;j++){
                s+=nums[j];
            }
           res.push_back(s);
        }
        return res;
    }
};
                      //1672. Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        for(int i=0;i<accounts.size();i++){
            int s=0;
            for(int j=0;j<accounts[i].size();j++){
                 s+=accounts[i][j];
                 
            }
            if(wealth<=s){
                wealth=s;
        }
        }
        
        cout<<wealth;
    return wealth;
    }
};                    
    
                         //412. Fizz Buzz

class Solution {
    vector<string> str;
public:
    vector<string> fizzBuzz(int n) {
for(int i=1;i<=n;i++){
    if(i%3==0 && i%5==0){
        str.push_back("FizzBuzz");
    }
    else if(i%3==0 ){
        str.push_back("Fizz");
    }
    else if(i%5==0){
        str.push_back("Buzz");
    }
    else{
        stringstream ss;
        ss<<i;
        string ch;
        ss>>ch;
        str.push_back(ch);
    }        
}
 return str ;
    }
};
     
                      //1342. Number of Steps to Reduce a Number to Zero

class Solution {
public:
    int numberOfSteps(int num) {
        int c;
        c=0;
        while(num>0){
            if(num%2==0){
                num=num/2;
                c=c+1;
            }
            else{
                num=num-1;
                c=c+1;
            }
        }
        return c;
    }
};
                              7. Reverse Integer
class Solution {
public:
    int reverse(int x) {
        long c=0;
        while(x){
            c=c*10+x%10;
            x=x/10;
        }
        if(c>INT_MAX || c<INT_MIN){
            return 0;
        }
        return int(c);
    
    }
};