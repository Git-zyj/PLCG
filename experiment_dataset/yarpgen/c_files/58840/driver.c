#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6009475373561384338ULL;
long long int var_2 = 2504232357950461392LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)20646;
unsigned long long int var_8 = 5401057470923660575ULL;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
long long int var_11 = -1780241890992666027LL;
unsigned long long int var_12 = 1552775553560511109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
