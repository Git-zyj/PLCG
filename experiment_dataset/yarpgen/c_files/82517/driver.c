#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned short var_2 = (unsigned short)42102;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)36565;
short var_8 = (short)-10000;
unsigned short var_10 = (unsigned short)6410;
int var_11 = 375842949;
unsigned char var_12 = (unsigned char)106;
signed char var_13 = (signed char)42;
unsigned short var_14 = (unsigned short)37300;
int zero = 0;
int var_15 = 259016256;
unsigned char var_16 = (unsigned char)195;
unsigned long long int var_17 = 331010924030818954ULL;
long long int var_18 = 4788800562772591163LL;
unsigned int var_19 = 955682241U;
unsigned int arr_0 [20] [20] ;
unsigned int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1680746069U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 2993918666U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
