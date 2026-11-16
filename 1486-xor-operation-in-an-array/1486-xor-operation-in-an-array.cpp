class Solution {
public:
    

    int xorOperation(int n, int start) {

        int ans =0;
        
        int s = start/2;

        int x = s + n-1;
        

        auto XOR = [](int num){
            switch(num % 4){ 
                case 0 : return num; 
                case 1 : return 1; 
                case 2 : return num + 1;
                default : return 0; 
            }
        };

        ans = XOR(s-1) ^ XOR(x);

        if(start % 2 != 0){
            ans = ans * 2 + (n % 2);
        }
        else{
            ans = ans * 2;
        }
        
        return ans;
        
    }
};