#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5812673075222424235ULL;
unsigned long long int var_3 = 4839693365912718004ULL;
int var_4 = 737646409;
unsigned long long int var_7 = 6088067713226447484ULL;
long long int var_9 = 5217950531502047499LL;
short var_13 = (short)-22127;
int var_14 = 672949231;
unsigned short var_17 = (unsigned short)43923;
int zero = 0;
signed char var_18 = (signed char)-81;
signed char var_19 = (signed char)22;
short var_20 = (short)10112;
unsigned short var_21 = (unsigned short)38702;
unsigned long long int arr_0 [18] ;
unsigned char arr_3 [18] [18] ;
signed char arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9363346254399129747ULL : 6437960542704659805ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)223 : (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)84 : (signed char)126;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
