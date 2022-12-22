bool isAnagram(char * s, char * t)
{
    int len_s=strlen(s);
    int len_t=strlen(t);

    int hash[26]={0};
    
    if(len_s != len_t)
    return false;

    for(int i=0;i<len_s;i++)
    {
      ++ hash[s[i]-'a'];
      -- hash[t[i]-'a'];
    }

    for(int i=0;i<26;i++)
    {
        if(hash[i]!=0)
        return false;
    }
    return true;

}
