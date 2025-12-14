#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17863083497288923215ULL;
short var_7 = (short)9154;
unsigned short var_9 = (unsigned short)44204;
int var_10 = 2141379702;
unsigned long long int var_12 = 260859308216816271ULL;
int zero = 0;
unsigned int var_16 = 2058604043U;
unsigned short var_17 = (unsigned short)6389;
unsigned char var_18 = (unsigned char)190;
unsigned short var_19 = (unsigned short)53369;
short var_20 = (short)-21353;
_Bool arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
