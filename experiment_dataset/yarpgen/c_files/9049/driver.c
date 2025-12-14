#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
unsigned int var_1 = 814702081U;
unsigned int var_2 = 2062692666U;
short var_3 = (short)18435;
int var_4 = 143349502;
unsigned char var_5 = (unsigned char)78;
unsigned char var_6 = (unsigned char)77;
int var_7 = 1968097674;
unsigned long long int var_8 = 14571385956219569850ULL;
long long int var_9 = -6174909059743654008LL;
unsigned char var_10 = (unsigned char)221;
short var_11 = (short)9688;
unsigned char var_12 = (unsigned char)17;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5782874172580721302LL;
int zero = 0;
signed char var_15 = (signed char)14;
short var_16 = (short)-17800;
unsigned char var_17 = (unsigned char)206;
unsigned short var_18 = (unsigned short)10757;
long long int var_19 = 1939705107233232167LL;
int arr_0 [14] ;
unsigned short arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned int arr_4 [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -535812334;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)17981;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1866166728U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
