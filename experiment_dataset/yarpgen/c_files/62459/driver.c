#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)60561;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3171311054238665294LL;
unsigned int var_5 = 18560003U;
unsigned long long int var_6 = 804387666458095329ULL;
long long int var_7 = 8977016310459383803LL;
unsigned short var_8 = (unsigned short)64412;
unsigned int var_9 = 2079641654U;
unsigned long long int var_10 = 1253284791528581349ULL;
unsigned char var_11 = (unsigned char)168;
unsigned long long int var_12 = 4803527113584528582ULL;
signed char var_13 = (signed char)10;
signed char var_14 = (signed char)57;
int var_15 = -1523845346;
int zero = 0;
long long int var_16 = 604557783138004397LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8593061651078778915LL;
short var_19 = (short)-13800;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17168549588658288707ULL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-32581;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned long long int arr_9 [16] ;
unsigned short arr_17 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 1063468102624706290ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8344 : (unsigned short)23798;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
