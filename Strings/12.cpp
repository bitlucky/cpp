//Longest common prefix

stringCommonPrefixUtil( string str1, string str2)
{
    string result;
    int n1 = str1.length() , n2 = str2.length();
    for(int i=0 , j=0; i<n1-1 && j<n2-1 ; i++ , j++ )
    {
        if(str1[i]!=str[j])
            break;
        result.push_back(str[i]);
    }
}

stringCommonPrefix(string arr[] , int n)
{
    string prefix = arr[0];
    for(int i=0 ; i<n-1 ; i++)
        prefix = stringCommonPrefix(prefix , arr[i]);

    return prefix;
}