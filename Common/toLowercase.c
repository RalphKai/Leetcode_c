char * toLowerCase(char * str){
    int count = 0;
    while(str[count]!='\0'){
        if (str[count] < 91 && str[count]>64)
            str[count] += 1<<5;
        count++;
    }
    return str;
}