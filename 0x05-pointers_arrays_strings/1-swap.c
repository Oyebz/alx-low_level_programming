/**
 * swap_int - swaps the value of two integers
 *  using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int kul;

kul = *a;
*a = *b;
*b = kul;
}
