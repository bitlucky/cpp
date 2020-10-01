// The idea is to check whether the last bit of the number is set or not.
//  If last bit is set then the number is odd, otherwise even.

// As we know bitwise AND Operation of the Number by 1 will be 1, 
// If it is odd because the last bit will be already set. Otherwise it will give 0 as output.

bool isEven(int n)  
{  
    // n&1 is 1, then odd, else even  
    return (!(n & 1));  
}     
