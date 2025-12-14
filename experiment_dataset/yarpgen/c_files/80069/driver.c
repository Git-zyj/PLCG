#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6009856348039937294LL;
unsigned long long int var_2 = 977671885002254415ULL;
unsigned long long int var_5 = 4182948362591794577ULL;
unsigned char var_6 = (unsigned char)228;
unsigned short var_10 = (unsigned short)46146;
short var_11 = (short)-7811;
int zero = 0;
unsigned char var_12 = (unsigned char)221;
short var_13 = (short)-15512;
signed char var_14 = (signed char)-15;
long long int var_15 = -9168797088836346244LL;
long long int var_16 = 3577276901833674149LL;
unsigned long long int var_17 = 3257384445786768305ULL;
unsigned char arr_0 [24] [24] ;
int arr_1 [24] [24] ;
int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1077074948;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -1094907853;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
