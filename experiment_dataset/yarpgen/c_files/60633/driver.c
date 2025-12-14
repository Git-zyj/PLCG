#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned short var_1 = (unsigned short)31908;
unsigned int var_2 = 1914752558U;
short var_4 = (short)26001;
unsigned short var_5 = (unsigned short)18947;
signed char var_6 = (signed char)-97;
signed char var_7 = (signed char)49;
signed char var_8 = (signed char)-17;
int var_9 = 1792391597;
unsigned long long int var_10 = 14410188750204083283ULL;
signed char var_11 = (signed char)-82;
signed char var_12 = (signed char)35;
signed char var_13 = (signed char)106;
signed char var_14 = (signed char)100;
int zero = 0;
short var_15 = (short)-7029;
signed char var_16 = (signed char)49;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)28440;
unsigned long long int var_19 = 2103102806649825836ULL;
int var_20 = 681250989;
unsigned short arr_0 [19] [19] ;
unsigned int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
unsigned short arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)37185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3895540621U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2950463570904621706ULL : 15385589471809314750ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)46496 : (unsigned short)26936;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
