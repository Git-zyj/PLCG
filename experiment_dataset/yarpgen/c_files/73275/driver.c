#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21270;
signed char var_5 = (signed char)39;
unsigned long long int var_7 = 16814637961586835388ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3985433192U;
unsigned char var_13 = (unsigned char)254;
signed char var_14 = (signed char)78;
unsigned long long int var_15 = 1687897998363981565ULL;
unsigned short var_16 = (unsigned short)17808;
long long int var_17 = -3682599848108459540LL;
unsigned short var_18 = (unsigned short)522;
unsigned int var_19 = 3787883477U;
long long int var_20 = -2784945874737964888LL;
unsigned short var_21 = (unsigned short)24713;
unsigned char arr_1 [13] [13] ;
_Bool arr_2 [13] ;
unsigned short arr_5 [13] [13] ;
unsigned char arr_7 [13] ;
int arr_10 [13] ;
unsigned long long int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)43331;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -1727784728;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 4109727685576191586ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
