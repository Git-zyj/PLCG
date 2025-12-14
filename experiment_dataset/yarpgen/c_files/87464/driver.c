#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1922018240750348349ULL;
signed char var_3 = (signed char)-10;
signed char var_4 = (signed char)-119;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 4909497615615367061ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)93;
int zero = 0;
int var_12 = -759264561;
unsigned short var_13 = (unsigned short)63956;
unsigned short var_14 = (unsigned short)34337;
signed char var_15 = (signed char)95;
signed char var_16 = (signed char)-62;
unsigned long long int arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 4778741939025502639ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 625079881825086851ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
