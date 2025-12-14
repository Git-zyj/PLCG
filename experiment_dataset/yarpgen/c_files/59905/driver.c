#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)41;
long long int var_5 = 3830720049568709166LL;
unsigned char var_6 = (unsigned char)84;
unsigned int var_8 = 2739792507U;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
int var_13 = 595975362;
long long int var_14 = 3489809902862434112LL;
unsigned short var_15 = (unsigned short)62446;
long long int var_16 = -8251691125241127050LL;
signed char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-101;
}

void checksum() {
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
