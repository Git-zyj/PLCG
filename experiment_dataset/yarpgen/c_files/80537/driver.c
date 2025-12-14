#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1254280028;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)245;
unsigned long long int var_8 = 1475355151347618717ULL;
unsigned char var_9 = (unsigned char)13;
int var_10 = -1505586722;
unsigned int var_11 = 587369007U;
int zero = 0;
unsigned char var_12 = (unsigned char)181;
unsigned int var_13 = 2288048279U;
unsigned int var_14 = 3138594675U;
unsigned char var_15 = (unsigned char)116;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3272571580U;
unsigned short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)65211;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
