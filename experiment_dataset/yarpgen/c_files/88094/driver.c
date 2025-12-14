#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24110;
unsigned long long int var_2 = 5777246583658275114ULL;
short var_3 = (short)17681;
long long int var_5 = 4290164059951085397LL;
int zero = 0;
long long int var_10 = -4399091825913508855LL;
long long int var_11 = -3547199895504203118LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
