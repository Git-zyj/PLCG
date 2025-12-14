#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-77;
signed char var_4 = (signed char)-106;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)48;
int var_7 = 1083099708;
unsigned short var_8 = (unsigned short)42373;
_Bool var_9 = (_Bool)1;
short var_10 = (short)27941;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)48691;
unsigned char var_13 = (unsigned char)51;
long long int var_14 = 8931588929474332537LL;
int zero = 0;
signed char var_15 = (signed char)-28;
short var_16 = (short)7168;
unsigned int var_17 = 2712035420U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5891487750149180136LL;
signed char var_20 = (signed char)119;
unsigned short arr_1 [11] ;
unsigned char arr_4 [13] ;
short arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)30251;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (short)4716;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
