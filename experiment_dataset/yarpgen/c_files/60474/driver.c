#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1129167318;
short var_1 = (short)-20741;
unsigned char var_2 = (unsigned char)49;
unsigned short var_4 = (unsigned short)59235;
signed char var_7 = (signed char)-15;
unsigned long long int var_8 = 14578494151994410850ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3738734253U;
unsigned char var_11 = (unsigned char)77;
short var_12 = (short)-10446;
int var_13 = -993082933;
unsigned int var_14 = 4204635666U;
unsigned int var_15 = 3322254056U;
int var_16 = -736424049;
short var_17 = (short)14181;
long long int var_18 = 4812913763050628756LL;
signed char arr_0 [14] [14] ;
int arr_1 [14] ;
unsigned int arr_3 [25] [25] ;
int arr_5 [20] [20] ;
int arr_6 [20] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -542988780;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1251510947U : 982375540U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -502871221;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 181826149;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 16836187290903969083ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
