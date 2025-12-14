#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7136161041836229163ULL;
unsigned short var_4 = (unsigned short)39181;
unsigned short var_8 = (unsigned short)23229;
unsigned int var_9 = 1458553778U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 5589582148021306655ULL;
long long int var_21 = 2170562519286727096LL;
unsigned long long int var_22 = 6555035593962824037ULL;
unsigned char var_23 = (unsigned char)53;
unsigned long long int var_24 = 10780643350292642559ULL;
_Bool var_25 = (_Bool)1;
long long int var_26 = -4753285097664580134LL;
unsigned short var_27 = (unsigned short)27863;
_Bool var_28 = (_Bool)1;
signed char arr_0 [11] ;
long long int arr_2 [11] ;
short arr_3 [11] [11] [11] ;
unsigned char arr_6 [18] ;
long long int arr_4 [11] [11] ;
long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5325879568348205176LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)1730 : (short)-8817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -6382303060591056419LL : -2876865093501442805LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = -5389501703176266800LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
