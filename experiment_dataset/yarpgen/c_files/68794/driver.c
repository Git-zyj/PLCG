#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6609;
unsigned short var_1 = (unsigned short)42979;
unsigned int var_5 = 427089403U;
short var_6 = (short)13539;
short var_7 = (short)5733;
unsigned int var_8 = 987342493U;
unsigned int var_9 = 2933282452U;
unsigned long long int var_10 = 8251069935196605600ULL;
unsigned long long int var_11 = 4143767099047060580ULL;
long long int var_12 = -8320048750973963546LL;
unsigned int var_16 = 1507397075U;
short var_17 = (short)-9860;
int zero = 0;
short var_20 = (short)24877;
unsigned int var_21 = 3792865476U;
unsigned short var_22 = (unsigned short)3385;
int var_23 = -146211620;
_Bool var_24 = (_Bool)0;
unsigned int arr_1 [23] ;
short arr_4 [23] ;
long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 2517251754U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-18694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1900525854613079170LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
