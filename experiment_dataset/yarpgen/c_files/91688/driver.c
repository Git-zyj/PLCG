#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18675;
unsigned char var_3 = (unsigned char)137;
unsigned short var_5 = (unsigned short)15821;
long long int var_7 = -6073257639202609981LL;
unsigned char var_9 = (unsigned char)14;
_Bool var_10 = (_Bool)1;
short var_12 = (short)19652;
int zero = 0;
unsigned int var_13 = 3264496884U;
int var_14 = 1389071239;
unsigned char var_15 = (unsigned char)116;
int var_16 = -104799511;
unsigned char var_17 = (unsigned char)138;
unsigned long long int arr_0 [16] ;
unsigned short arr_11 [16] [16] ;
unsigned int arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 17251245970061917075ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)34061 : (unsigned short)15138;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2977339345U : 1738892520U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
