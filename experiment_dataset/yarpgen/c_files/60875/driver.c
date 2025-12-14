#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6152764014801114683ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)32600;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-441;
unsigned long long int var_11 = 7301536147646822422ULL;
int zero = 0;
unsigned long long int var_15 = 2527750647437850847ULL;
int var_16 = 1854950934;
unsigned short var_17 = (unsigned short)50843;
signed char var_18 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
