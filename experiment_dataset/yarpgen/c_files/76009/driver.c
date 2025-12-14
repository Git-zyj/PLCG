#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26999;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1049867335U;
unsigned long long int var_7 = 11664100805528907015ULL;
unsigned char var_8 = (unsigned char)62;
unsigned char var_9 = (unsigned char)6;
short var_11 = (short)-2584;
short var_12 = (short)-3932;
unsigned char var_14 = (unsigned char)187;
unsigned long long int var_15 = 2492500003672555723ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)4098;
signed char var_17 = (signed char)-38;
signed char var_18 = (signed char)83;
unsigned long long int var_19 = 227026315678107795ULL;
_Bool var_20 = (_Bool)0;
int arr_1 [19] [19] ;
_Bool arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -2076475591;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
