#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20933;
unsigned short var_1 = (unsigned short)48118;
signed char var_2 = (signed char)-37;
short var_3 = (short)9673;
int var_4 = -338068410;
unsigned int var_5 = 3488058209U;
short var_6 = (short)-10606;
unsigned char var_7 = (unsigned char)162;
int var_8 = 978507590;
short var_9 = (short)12690;
int zero = 0;
short var_11 = (short)16566;
short var_12 = (short)-21374;
unsigned int var_13 = 2836992973U;
unsigned short var_14 = (unsigned short)8475;
_Bool var_15 = (_Bool)1;
short var_16 = (short)14028;
unsigned short var_17 = (unsigned short)35643;
unsigned char var_18 = (unsigned char)132;
int var_19 = 930964;
_Bool var_20 = (_Bool)0;
unsigned short arr_0 [20] [20] ;
short arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [23] [23] ;
_Bool arr_4 [23] [23] ;
_Bool arr_8 [13] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)13401;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)5716;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 327949358123625777ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)44098;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
