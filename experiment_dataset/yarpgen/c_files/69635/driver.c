#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
int var_2 = 89632461;
signed char var_6 = (signed char)24;
long long int var_7 = -7785558957943218874LL;
unsigned long long int var_8 = 6207404105461268152ULL;
short var_9 = (short)19144;
int zero = 0;
unsigned char var_10 = (unsigned char)82;
int var_11 = -1692375411;
signed char var_12 = (signed char)63;
int var_13 = 1656740451;
unsigned short var_14 = (unsigned short)55350;
unsigned short var_15 = (unsigned short)27040;
_Bool var_16 = (_Bool)1;
int arr_1 [14] [14] ;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -977519188;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)37957;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
