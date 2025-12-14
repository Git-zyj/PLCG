#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned short var_1 = (unsigned short)54564;
int var_4 = 275421993;
long long int var_6 = -8213233922993050073LL;
unsigned int var_7 = 1455610350U;
unsigned char var_8 = (unsigned char)247;
unsigned short var_12 = (unsigned short)21441;
long long int var_13 = 2164623207319500938LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_17 = 665561392;
short var_18 = (short)-8687;
unsigned char var_19 = (unsigned char)116;
unsigned long long int var_20 = 3846469234557571432ULL;
int var_21 = -279360340;
unsigned long long int var_22 = 1617035117342603956ULL;
short var_23 = (short)9128;
signed char var_24 = (signed char)109;
int var_25 = -1799743272;
int arr_0 [12] ;
_Bool arr_2 [18] ;
unsigned char arr_3 [18] ;
short arr_4 [18] [18] ;
unsigned long long int arr_7 [18] [18] ;
signed char arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1329103341;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-10174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 11345065198774733761ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)65 : (signed char)86;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
