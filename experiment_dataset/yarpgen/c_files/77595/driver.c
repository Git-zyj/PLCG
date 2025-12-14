#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)28674;
signed char var_6 = (signed char)103;
unsigned int var_13 = 1900203893U;
short var_17 = (short)21016;
signed char var_18 = (signed char)93;
int zero = 0;
unsigned char var_19 = (unsigned char)178;
unsigned int var_20 = 2096983472U;
int var_21 = -752263765;
signed char var_22 = (signed char)-17;
int var_23 = 220210783;
signed char var_24 = (signed char)-125;
_Bool var_25 = (_Bool)0;
int var_26 = 701682286;
unsigned char var_27 = (unsigned char)143;
_Bool arr_4 [19] [19] ;
int arr_13 [19] [19] [19] [19] ;
unsigned int arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -1128741713;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 2051774031U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
