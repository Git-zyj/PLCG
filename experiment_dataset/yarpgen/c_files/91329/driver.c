#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned int var_1 = 4051113206U;
unsigned long long int var_2 = 10170644536190771451ULL;
unsigned long long int var_3 = 3865997057548570790ULL;
int var_4 = 1602970275;
short var_5 = (short)-1821;
signed char var_6 = (signed char)48;
short var_7 = (short)13713;
unsigned char var_8 = (unsigned char)54;
long long int var_9 = -3841127861958357030LL;
long long int var_10 = 7209958479709013566LL;
int zero = 0;
signed char var_11 = (signed char)-25;
unsigned long long int var_12 = 6806832026700166773ULL;
signed char var_13 = (signed char)-53;
unsigned long long int var_14 = 9005762811555663147ULL;
unsigned int var_15 = 2268971177U;
unsigned int var_16 = 4111735984U;
unsigned short var_17 = (unsigned short)28011;
signed char var_18 = (signed char)36;
unsigned long long int var_19 = 5614914114484854840ULL;
unsigned int var_20 = 2829430488U;
unsigned long long int arr_0 [18] [18] ;
unsigned int arr_1 [18] [18] ;
short arr_2 [18] ;
int arr_5 [15] [15] ;
long long int arr_7 [15] ;
unsigned int arr_8 [15] [15] ;
unsigned int arr_3 [18] ;
short arr_4 [18] [18] ;
int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3756831133916038908ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1027569837U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-1635;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -310435630;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8996152580306452474LL : 4473487628588077337LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 342773859U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2417437307U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-31149;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 997487824 : -1929178377;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
