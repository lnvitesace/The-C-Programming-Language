// write a function invert(x, p, n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.
unsigned invert(unsigned x, int p, int n)
{
    // create a mask with n bits set to 1, and the rest set to 0
    unsigned mask = ~(~0 << n);
    // shift the mask to the position p
    // a <<= b means a = a << b, which will be covered in section 2.10
    mask <<= (p + 1 - n);
    // invert the bits of x
    return x ^ mask;
}