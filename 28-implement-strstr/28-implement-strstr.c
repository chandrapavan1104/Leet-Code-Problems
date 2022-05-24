

int strStr(char * haystack, char * needle){
    if(needle == "")
        return 0;
    char *p = strstr(haystack,needle);
    if(!p)
        return -1;
    return p - haystack;
}