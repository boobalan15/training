bool rotateString(char * s, char * goal)
{
    int len_s=strlen(s);
    int len_t=strlen(goal);

    if(len_s!=len_t)
    return false;

    char temp[len_s*2+1]; //strlen(s) for len_s
    strcpy(temp,s);
    strcat(temp,s);
    return strstr(temp,goal)?true:false;

}
