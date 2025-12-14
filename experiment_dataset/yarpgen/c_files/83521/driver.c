#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9742180991312213279ULL;
short var_2 = (short)-17966;
short var_3 = (short)-3065;
_Bool var_4 = (_Bool)0;
short var_5 = (short)28099;
unsigned short var_6 = (unsigned short)41730;
long long int var_7 = 7671032107490924878LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 1506958451209501419ULL;
int zero = 0;
signed char var_11 = (signed char)108;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)40408;
unsigned long long int var_14 = 17370715072886191142ULL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool arr_1 [25] ;
_Bool arr_5 [25] ;
unsigned short arr_8 [23] [23] ;
unsigned short arr_6 [25] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)29049;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)22718 : (unsigned short)41141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)126;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
