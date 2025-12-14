#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3967858506U;
unsigned char var_2 = (unsigned char)130;
signed char var_3 = (signed char)-11;
unsigned char var_4 = (unsigned char)128;
long long int var_5 = -3092410224234139294LL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)7595;
short var_9 = (short)-30255;
int var_11 = -1865692695;
unsigned char var_12 = (unsigned char)77;
long long int var_13 = 585977925512811625LL;
_Bool var_14 = (_Bool)1;
int var_15 = -1384178481;
int zero = 0;
signed char var_16 = (signed char)-101;
unsigned int var_17 = 2581288548U;
long long int var_18 = -7818265947621305286LL;
unsigned long long int var_19 = 7204475337689717649ULL;
unsigned short var_20 = (unsigned short)13271;
signed char var_21 = (signed char)-23;
unsigned long long int var_22 = 13146529709725960970ULL;
unsigned short arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
long long int arr_2 [21] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)37347;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)9270;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2891420404857684678LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)63720;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
