#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)18493;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1130793625U;
int zero = 0;
unsigned int var_17 = 3600801443U;
unsigned char var_18 = (unsigned char)192;
int var_19 = 1974114360;
unsigned char var_20 = (unsigned char)44;
unsigned char var_21 = (unsigned char)14;
short var_22 = (short)-9585;
unsigned long long int arr_2 [15] [15] ;
long long int arr_3 [15] [15] [15] ;
unsigned short arr_8 [13] ;
unsigned short arr_12 [13] ;
int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 17739845694444970964ULL : 344453206298999788ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -8230500160611634251LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)42151;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned short)31707;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 1589938386;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
