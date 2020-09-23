// REverse words in a string 
Initially, reverse the individual words of the given string one by one, for the above example, 
after reversing individual words the string should be “i ekil siht margorp yrev hcum”.
Reverse the whole string from start to end to get the desired output “much very program 
this like i” in the above example.



void reverse(char *s)
{
    char *wordbegin = NULL;
    char *temp = s;

    while(*temp)
    {
            if((wordbegin==NULL) && (temp!=' '))
        wordbegin = temp;
    if(wordbegin && ((*(temp+1)==' ' )|| (*(temp+1)== '\0'))) 
    {
        reverse(wordbegin, temp);
        wordbegin = NULL;
    }
    temp++;
    }
    reverse(s , temp-1);
}