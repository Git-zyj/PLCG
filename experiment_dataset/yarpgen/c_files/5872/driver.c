#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned char var_1 = (unsigned char)91;
long long int var_2 = 7936835889055336611LL;
signed char var_3 = (signed char)-22;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-79;
signed char var_6 = (signed char)-64;
short var_7 = (short)-17959;
unsigned short var_8 = (unsigned short)41428;
unsigned long long int var_9 = 3005754828677812406ULL;
int zero = 0;
unsigned long long int var_11 = 16964805760700156940ULL;
signed char var_12 = (signed char)-53;
unsigned char var_13 = (unsigned char)98;
unsigned char var_14 = (unsigned char)106;
unsigned long long int var_15 = 13735353522647220765ULL;
unsigned int var_16 = 134703137U;
unsigned int var_17 = 3875917812U;
unsigned long long int var_18 = 16113733947705007345ULL;
short arr_2 [25] ;
unsigned long long int arr_3 [25] [25] ;
long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)5341;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1929774125803668857ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -2313685947997602443LL : 2843175068260387677LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
