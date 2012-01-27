//version subscripting
int strcmp(char *s, char *t) {
	int i;
	for (i = 0; s[i] == t[i]; i++) 
		if (s[i] == '\0')
			return 0; 
	return s[i] - t[i];
}

//version punteros
int strcmp(char *s, char *t) {
	for ( ; *s == *t; s++, t++) 
		if (*s == '\0')
			return 0; 
	return *s - *t;
}

//strncmp
int strncmp(char* str1, char* str2, int n)
{
    while(n--)
        if(*str1++ != *str2++)
            return *(str1 - 1) - *(str2 - 1);
    return 0;
}

