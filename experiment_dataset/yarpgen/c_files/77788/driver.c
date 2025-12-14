#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31593;
_Bool var_5 = (_Bool)1;
unsigned long long int var_12 = 8472351470273113251ULL;
short var_13 = (short)-27722;
unsigned int var_14 = 2695760209U;
int zero = 0;
unsigned int var_15 = 3504616098U;
unsigned long long int var_16 = 13494501512043192581ULL;
unsigned int var_17 = 959055413U;
unsigned long long int var_18 = 13446476208369674698ULL;
unsigned long long int arr_0 [14] ;
unsigned char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 8422023733688576259ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)42;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
