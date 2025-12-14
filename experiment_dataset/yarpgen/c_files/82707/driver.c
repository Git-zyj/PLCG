#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)52;
unsigned long long int var_7 = 13138653875261508276ULL;
unsigned short var_8 = (unsigned short)2041;
long long int var_11 = -5183360462943235645LL;
short var_13 = (short)-29335;
unsigned short var_14 = (unsigned short)45630;
unsigned int var_16 = 2953983782U;
unsigned long long int var_17 = 8020532914747385474ULL;
int zero = 0;
long long int var_19 = 5729834622387181827LL;
long long int var_20 = -3049046067844234014LL;
long long int var_21 = -7045086018160093448LL;
signed char var_22 = (signed char)-73;
unsigned char var_23 = (unsigned char)222;
short var_24 = (short)12474;
signed char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-9;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
