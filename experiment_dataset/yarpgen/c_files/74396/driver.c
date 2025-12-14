#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 547853718U;
unsigned char var_4 = (unsigned char)4;
signed char var_6 = (signed char)6;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_14 = -7064832034332962868LL;
unsigned int var_15 = 3029652306U;
unsigned int var_16 = 2628326379U;
int var_17 = 1060639220;
long long int arr_0 [11] ;
_Bool arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -7303695931930446957LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
