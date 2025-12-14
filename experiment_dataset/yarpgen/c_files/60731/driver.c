#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26273;
unsigned int var_5 = 524778981U;
short var_6 = (short)18654;
unsigned short var_7 = (unsigned short)42573;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)58776;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)62;
short var_15 = (short)-19005;
long long int var_16 = 7506996696010438507LL;
unsigned short var_17 = (unsigned short)8931;
short var_18 = (short)21108;
unsigned int var_19 = 2841396272U;
signed char arr_0 [14] ;
int arr_1 [14] ;
short arr_5 [11] ;
short arr_2 [14] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -941672666;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)11454;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-29323;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)3;
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
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
