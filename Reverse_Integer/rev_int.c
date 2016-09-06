int reverse(int x) {
    long reverse = 0;
 
    while (x != 0)
    {
        /* 1) shift reverse over to make room for a new digit */
        /* 2) grab the least significant digit in x */
        reverse = (reverse * 10) + (x % 10);
        x = x / 10;
    }
 
    if (reverse > INT_MAX || reverse < INT_MIN) 
        return 0;
    else
        return reverse;
}
