bool isSubsequence(char* s, char* t) {
    int sSize = strlen(s);
    int tSize = strlen(t);
    int i=0,j=0;
    while(i<sSize && j<tSize)
    {
        if(s[i]==t[j])
        {
            i++;
        }
        j++;
    }
    if(i==sSize)
    {
        return true;
    }
    return false;
    
}
