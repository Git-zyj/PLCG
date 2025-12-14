#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned char var_3 = (unsigned char)28;
unsigned char var_4 = (unsigned char)119;
unsigned long long int var_5 = 248829016897404118ULL;
unsigned long long int var_7 = 8721947727979040442ULL;
unsigned char var_9 = (unsigned char)202;
int zero = 0;
unsigned short var_10 = (unsigned short)16840;
unsigned short var_11 = (unsigned short)62073;
int var_12 = 1818396082;
unsigned short var_13 = (unsigned short)4963;
unsigned short arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)3459;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
