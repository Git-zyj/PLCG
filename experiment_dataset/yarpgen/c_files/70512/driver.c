#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1777679037;
unsigned short var_2 = (unsigned short)8536;
signed char var_3 = (signed char)-43;
unsigned char var_5 = (unsigned char)225;
short var_6 = (short)-9166;
short var_8 = (short)-18165;
unsigned long long int var_10 = 8315145382648806933ULL;
short var_11 = (short)-15779;
unsigned char var_13 = (unsigned char)249;
unsigned char var_14 = (unsigned char)115;
short var_15 = (short)-2221;
short var_16 = (short)-14704;
short var_19 = (short)-25761;
int zero = 0;
int var_20 = 980189019;
int var_21 = -889681720;
unsigned int var_22 = 3031156466U;
int var_23 = -1501647252;
long long int var_24 = 8112121016061407722LL;
unsigned long long int arr_2 [23] ;
signed char arr_5 [23] [23] ;
unsigned int arr_6 [23] ;
unsigned int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 5665900244596697870ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 2145904714U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 1555559922U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
