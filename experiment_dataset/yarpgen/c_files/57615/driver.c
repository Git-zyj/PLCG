#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)123;
unsigned short var_5 = (unsigned short)3769;
long long int var_7 = 9214846816335579181LL;
int zero = 0;
unsigned long long int var_11 = 1787941606628559427ULL;
int var_12 = -254028069;
int var_13 = -744648607;
long long int var_14 = 4724593850082795417LL;
int var_15 = -949163937;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
