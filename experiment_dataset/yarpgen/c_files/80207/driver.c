#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1106289982;
int var_2 = -923130165;
signed char var_4 = (signed char)-59;
signed char var_8 = (signed char)-42;
unsigned char var_9 = (unsigned char)38;
signed char var_10 = (signed char)48;
long long int var_11 = -4217240180936079596LL;
unsigned long long int var_12 = 15104254642885061722ULL;
long long int var_13 = 537820912055145487LL;
int zero = 0;
unsigned int var_14 = 1028648091U;
signed char var_15 = (signed char)-80;
unsigned char var_16 = (unsigned char)204;
long long int var_17 = -7306674450396821720LL;
int arr_1 [16] ;
_Bool arr_3 [16] ;
unsigned char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -482222674;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)108;
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
