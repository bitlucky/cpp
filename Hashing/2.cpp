// Nuts and Bolts problem

In this post, hashmap based approach is discussed.

    Travese the nuts array and create a hashmap
    Traverse the bolts array and search for it in hashmap.
    If it is found in the hashmap of nuts than this means bolts exist for that nut.


// function to match nuts and bolts 
void nutboltmatch(char nuts[], char bolts[], int n) 
{ 
    unordered_map<char, int> hash; 
  
    // creating a hashmap for nuts 
    for (int i = 0; i < n; i++) 
        hash[nuts[i]] = i; 
  
    // searching for nuts for each bolt in hash map 
    for (int i = 0; i < n; i++) 
        if (hash.find(bolts[i]) != hash.end()) 
            nuts[i] = bolts[i]; 
  
    // print the result 
    cout << "matched nuts and bolts are-" << endl; 
    for (int i = 0; i < n; i++) 
        cout << nuts[i] << " "; 
    cout << endl; 
    for (int i = 0; i < n; i++) 
        cout << bolts[i] << " "; 
} 


