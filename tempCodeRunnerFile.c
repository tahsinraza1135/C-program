int main(){
    char str[200],upper[200],lower[200];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=0; i<len; i++){
        upper[i]=toupper(str[i]);
        lower[i]=tolower(str[i]);
    }
    upper[len]='\0';
    lower[len]='\0';
    printf("Original string: %s\n", str);
    printf("Length: %d\n", len);
    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);
    return 0;
}
