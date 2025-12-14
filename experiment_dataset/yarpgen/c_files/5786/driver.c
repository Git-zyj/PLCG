#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 146805325208231832ULL;
unsigned long long int var_4 = 9615445008726546066ULL;
unsigned long long int var_5 = 15017333403929434057ULL;
unsigned long long int var_6 = 15240902669497681441ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 8627082807490496932ULL;
unsigned long long int var_10 = 14700833339012653843ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1165638856U;
int zero = 0;
unsigned long long int var_15 = 12448571228336777001ULL;
unsigned long long int var_16 = 2260467559512019330ULL;
unsigned short var_17 = (unsigned short)13670;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)132;
unsigned long long int var_20 = 693551363174450207ULL;
unsigned long long int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
int arr_3 [11] ;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 12699259788265305312ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)41304;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 877236460;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 262465444U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
