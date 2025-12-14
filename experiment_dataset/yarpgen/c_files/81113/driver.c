#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1067778354968003312ULL;
short var_1 = (short)10817;
signed char var_2 = (signed char)85;
unsigned long long int var_3 = 11343654424297435997ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)60322;
unsigned char var_6 = (unsigned char)161;
unsigned short var_7 = (unsigned short)16930;
signed char var_9 = (signed char)40;
int zero = 0;
unsigned short var_10 = (unsigned short)65059;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)176;
long long int var_13 = 8141164362636683260LL;
unsigned int var_14 = 673592105U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -2728616331689938395LL;
short arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned int arr_3 [14] ;
unsigned short arr_4 [14] ;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)28336;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11021172980202184888ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3530315001U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)1992;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)-29579;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
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
