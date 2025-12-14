#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
_Bool var_1 = (_Bool)1;
int var_2 = -403507541;
signed char var_4 = (signed char)53;
signed char var_5 = (signed char)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 5768042439391904161ULL;
unsigned int var_11 = 3835939810U;
short var_13 = (short)8596;
unsigned int var_14 = 2843570049U;
unsigned short var_15 = (unsigned short)22782;
int var_16 = -1963339788;
unsigned int var_19 = 6377734U;
int zero = 0;
short var_20 = (short)2238;
int var_21 = -436122288;
signed char var_22 = (signed char)113;
unsigned short var_23 = (unsigned short)29827;
int var_24 = -1715335031;
unsigned short var_25 = (unsigned short)27176;
int arr_0 [10] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -954048919;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)4 : (signed char)-90;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
