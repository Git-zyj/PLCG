#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3372022885U;
unsigned short var_6 = (unsigned short)26393;
unsigned int var_8 = 70029178U;
unsigned short var_9 = (unsigned short)16502;
signed char var_11 = (signed char)91;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)9;
unsigned int var_16 = 2026917691U;
signed char var_18 = (signed char)-58;
int zero = 0;
short var_19 = (short)-5822;
unsigned int var_20 = 16631500U;
unsigned short var_21 = (unsigned short)14528;
unsigned int var_22 = 1230625727U;
_Bool var_23 = (_Bool)1;
short var_24 = (short)16962;
unsigned int var_25 = 248551845U;
unsigned int var_26 = 1710329398U;
unsigned long long int var_27 = 5426721247767147900ULL;
unsigned char var_28 = (unsigned char)79;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 4658602718364652835ULL;
unsigned int var_33 = 132608205U;
unsigned int var_34 = 2544361658U;
short var_35 = (short)-14092;
_Bool arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned int arr_2 [11] ;
unsigned short arr_4 [11] ;
short arr_5 [11] [11] [11] ;
unsigned int arr_11 [16] ;
unsigned short arr_20 [16] [16] [16] ;
unsigned int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2757114159U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)19712;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)7477;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 201305194U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)51826;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 988844967U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
