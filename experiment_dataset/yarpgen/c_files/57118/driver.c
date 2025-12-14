#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6477547169718813488ULL;
short var_1 = (short)14297;
unsigned char var_2 = (unsigned char)70;
long long int var_3 = 4750737281531273181LL;
unsigned short var_5 = (unsigned short)23460;
int zero = 0;
signed char var_11 = (signed char)76;
long long int var_12 = -9120149261499448688LL;
unsigned char var_13 = (unsigned char)53;
unsigned char var_14 = (unsigned char)203;
short var_15 = (short)4446;
unsigned int var_16 = 2084645745U;
signed char arr_0 [22] ;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)8095;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
