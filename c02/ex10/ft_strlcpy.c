unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    //Pro typing, 🚨not good practice🚨
	int		len;
    int size;
    int i;


    i = 0;
	len = 0;
    size = 0;
    while (src[i])
    {
        size++;
    }
    if (size != '\0')
    {
        while (src[i]=='\0')
        {
            dest[i] = src[i];
            i++;
        }
        
    }
    return(count);
    
	while (*(src + len) && --size)
		*dest++ = *(src + len++);
	*dest = '\0';		
	while (*(src + len))
		++len;
	return (len);
}l