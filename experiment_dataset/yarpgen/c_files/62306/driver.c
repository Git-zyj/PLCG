#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned char var_3 = (unsigned char)188;
int var_5 = 1944999518;
unsigned long long int var_6 = 11612388678896880418ULL;
signed char var_7 = (signed char)121;
unsigned long long int var_8 = 6465976438275327120ULL;
_Bool var_9 = (_Bool)0;
int var_12 = -44257115;
unsigned char var_13 = (unsigned char)144;
int var_14 = -55306685;
unsigned char var_15 = (unsigned char)165;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = 241814058;
unsigned char var_19 = (unsigned char)77;
unsigned short var_20 = (unsigned short)60216;
int var_21 = -415608062;
unsigned char var_22 = (unsigned char)63;
short var_23 = (short)-4735;
short var_24 = (short)-22189;
_Bool arr_0 [19] ;
unsigned long long int arr_3 [19] ;
_Bool arr_4 [19] ;
_Bool arr_5 [19] [19] [19] ;
unsigned int arr_9 [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 15788631615460762002ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3536894614U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
