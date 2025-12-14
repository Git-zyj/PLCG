#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)106;
unsigned char var_12 = (unsigned char)218;
unsigned long long int var_14 = 13798355119258854804ULL;
int zero = 0;
int var_18 = -1944602919;
unsigned int var_19 = 4237914972U;
unsigned char var_20 = (unsigned char)142;
unsigned long long int var_21 = 13236889198817503896ULL;
unsigned long long int var_22 = 3363370576880450291ULL;
signed char var_23 = (signed char)74;
unsigned int var_24 = 203168614U;
unsigned char var_25 = (unsigned char)237;
int var_26 = 946227903;
_Bool var_27 = (_Bool)1;
unsigned int arr_0 [25] ;
unsigned long long int arr_2 [25] [25] ;
unsigned short arr_3 [16] [16] ;
long long int arr_6 [16] [16] ;
unsigned short arr_7 [16] ;
short arr_15 [16] [16] [16] ;
long long int arr_16 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3749094145U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4828231288985512904ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)60887;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 2885811206757892999LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)48929;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)30117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -4694555212717808213LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
