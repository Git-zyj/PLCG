#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)219;
signed char var_3 = (signed char)122;
int var_9 = -1219532230;
signed char var_10 = (signed char)122;
unsigned long long int var_12 = 11358640479133599717ULL;
int var_13 = -1377177276;
unsigned char var_15 = (unsigned char)77;
int zero = 0;
int var_17 = -1626117624;
unsigned char var_18 = (unsigned char)178;
signed char var_19 = (signed char)-40;
short arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-19340;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)57;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
