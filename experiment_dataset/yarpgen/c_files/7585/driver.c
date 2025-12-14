#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23559;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)253;
unsigned short var_9 = (unsigned short)48451;
unsigned short var_10 = (unsigned short)64141;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)15;
unsigned char var_14 = (unsigned char)33;
unsigned int var_15 = 1779565410U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-18;
unsigned long long int var_18 = 12538925644216684167ULL;
int var_19 = -1714022205;
int var_20 = 706539800;
unsigned long long int var_21 = 9685427135514712411ULL;
_Bool arr_0 [20] ;
short arr_1 [20] [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned int arr_8 [20] [20] [20] ;
short arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17717 : (short)21768;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 6834273869247083967ULL : 8140944797190300755ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3135547754U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-18839 : (short)-1850;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
