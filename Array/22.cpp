// Merge Overlapping Subintervals

naive approach 
struct Interval
{
    int start;
    int end;
}
 
bool mycomp(Interval a , Interval b)
{
    return a.start < b.start;
}

void mergeIntervals( Interval arr[] , int n)
{
    sort(arr , arr+n , mycomp );
    stack<Interval> s;
        s.push(arr[0]);
    for(int i=1 ; i<n ; i++)
    {
        Interval top = s.top();
        if(top.end < arr[i].start)
            s.push(arr[i]);
        
        else if( top.end < arr[i].end)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }  
}


// Efficient solution 

void mergeIntervals ( Interval arr[] , int n)
{
    int index = 0;
    for(int i = 1 ; i<n ; i++)
    {
        if(arr[index].end < arr[i].start)
        {
            arr[index].start = min(arr[index].start , arr[i].start );
            arr[index].end = max(arr[index].end , arr[i].end);
        }
        else
        {
            index++ ;
            arr[index] = arr[i];
        }
    }
}