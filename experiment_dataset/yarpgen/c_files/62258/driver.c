#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6991;
signed char var_2 = (signed char)105;
short var_3 = (short)302;
long long int var_5 = 5651946796015691696LL;
unsigned char var_6 = (unsigned char)231;
short var_7 = (short)1041;
unsigned char var_8 = (unsigned char)145;
unsigned long long int var_10 = 9419338598476118193ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-94;
unsigned short var_14 = (unsigned short)36738;
signed char var_15 = (signed char)-32;
unsigned char var_16 = (unsigned char)160;
unsigned int var_17 = 2609881574U;
long long int var_18 = -8812069391283283740LL;
unsigned int var_19 = 870741617U;
unsigned short arr_0 [20] ;
_Bool arr_3 [11] ;
unsigned int arr_4 [11] ;
unsigned char arr_6 [11] ;
unsigned short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)36182;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3384916710U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)3297;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
