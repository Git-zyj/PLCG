#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)29713;
signed char var_3 = (signed char)-60;
unsigned int var_5 = 1362954033U;
short var_6 = (short)-14955;
short var_8 = (short)-10718;
unsigned long long int var_9 = 3692987830327086901ULL;
unsigned int var_10 = 603863264U;
int zero = 0;
unsigned short var_11 = (unsigned short)40403;
int var_12 = -687924277;
unsigned char var_13 = (unsigned char)5;
unsigned char var_14 = (unsigned char)91;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)4306;
_Bool var_18 = (_Bool)1;
short arr_1 [20] [20] ;
long long int arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned long long int arr_5 [20] ;
int arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)12182;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3796639293062681868LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 15700194282500800405ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 1920648884;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
