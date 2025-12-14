#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
long long int var_3 = -5681753440480326817LL;
unsigned long long int var_7 = 13781586386117897487ULL;
unsigned char var_8 = (unsigned char)11;
short var_12 = (short)-7751;
unsigned long long int var_13 = 9253162237197517686ULL;
unsigned int var_14 = 439235857U;
int zero = 0;
unsigned char var_17 = (unsigned char)186;
unsigned char var_18 = (unsigned char)108;
unsigned long long int var_19 = 12281553860891898829ULL;
short var_20 = (short)-1982;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned int arr_2 [13] [13] [13] ;
_Bool arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 4065648084U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 701493349U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4267623971U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
