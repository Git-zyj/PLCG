#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 670718890051067780ULL;
unsigned long long int var_1 = 7660964012119499235ULL;
_Bool var_4 = (_Bool)0;
long long int var_10 = -2830520006526533165LL;
unsigned short var_11 = (unsigned short)60272;
signed char var_12 = (signed char)62;
short var_13 = (short)20730;
int zero = 0;
unsigned int var_14 = 2035084236U;
_Bool var_15 = (_Bool)1;
int var_16 = -1301108152;
long long int var_17 = 5654687573024691503LL;
unsigned long long int arr_0 [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 13210064365834349998ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)232 : (unsigned char)203;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
