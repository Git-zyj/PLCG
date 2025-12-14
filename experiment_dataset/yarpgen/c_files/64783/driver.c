#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28557;
long long int var_3 = -2633294304618600282LL;
int var_4 = 877173874;
unsigned int var_5 = 931029823U;
unsigned int var_7 = 2475418869U;
unsigned short var_8 = (unsigned short)24054;
int var_10 = -561462425;
unsigned int var_14 = 1751186282U;
unsigned int var_15 = 592946866U;
int zero = 0;
int var_16 = -33142967;
signed char var_17 = (signed char)-53;
signed char arr_0 [10] ;
short arr_2 [10] ;
long long int arr_4 [10] ;
int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)11774;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -6087031920642058265LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1055462485;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
