#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8011;
long long int var_1 = 6689571989343794943LL;
unsigned int var_2 = 3740814690U;
unsigned short var_4 = (unsigned short)29364;
unsigned int var_7 = 4211803228U;
short var_11 = (short)-18978;
long long int var_12 = 2200969952491925426LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1375265289U;
unsigned long long int var_18 = 6691980137594159185ULL;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)10812 : (short)-32605;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
