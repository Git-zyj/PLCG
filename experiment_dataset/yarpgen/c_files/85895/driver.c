#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2482080358U;
short var_3 = (short)4296;
unsigned short var_4 = (unsigned short)14479;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)20;
unsigned int var_7 = 113956799U;
short var_11 = (short)-3597;
int zero = 0;
unsigned long long int var_14 = 2949898498001210907ULL;
unsigned long long int var_15 = 7826154384090301095ULL;
unsigned short var_16 = (unsigned short)45017;
unsigned long long int var_17 = 5629404014631027206ULL;
void init() {
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
