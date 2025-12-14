#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49579;
int var_4 = -410197902;
short var_5 = (short)16291;
short var_6 = (short)-4976;
int var_8 = 52688304;
signed char var_9 = (signed char)113;
unsigned short var_10 = (unsigned short)6321;
signed char var_12 = (signed char)108;
int zero = 0;
unsigned int var_13 = 892331568U;
unsigned short var_14 = (unsigned short)28069;
unsigned long long int var_15 = 9119253683978209787ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5120299810404026159ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
