#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
long long int var_7 = 792149618292459342LL;
int var_11 = -2060332591;
unsigned int var_15 = 3461805106U;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)32417;
unsigned short var_21 = (unsigned short)62235;
unsigned int var_22 = 2333673725U;
unsigned char var_23 = (unsigned char)151;
int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1570083423;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
