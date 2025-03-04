class Solution {
public:

    //recursion code of the following code

    // int fibonaci(int x){
    //     if(x<=1){
    //         return x;
    //     } else{
    //         return fibonaci(x-1) + fibonaci(x-2);
    //     }
    // }
    // int fib(int n) {
    //     int answer;
    //     if(n>=0 && n <= 30){
    //         answer = fibonaci(n);
    //     }

    //     return answer;
    // }

    int fib(int n){
        int a = 0 ;
        int b = 1;
        int c;

        if(n==0){
            return a;
        }else if(n==1){
            return b;
        }else{
            for(int i=2;i<=n;i++)
            {
                c=a+b;
                a=b;
                b=c;
            }

            return c;
        }
    }    

};
