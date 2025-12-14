#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59355;
unsigned long long int var_4 = 6554254876615558185ULL;
unsigned int var_7 = 178866507U;
int zero = 0;
signed char var_12 = (signed char)49;
unsigned char var_13 = (unsigned char)132;
long long int var_14 = 3717244119387033378LL;
short var_15 = (short)24728;
unsigned char var_16 = (unsigned char)68;
signed char var_17 = (signed char)-97;
unsigned long long int var_18 = 6809734252325053761ULL;
_Bool var_19 = (_Bool)0;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned short)17889;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1192214523463022245ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1727617846;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
