#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-936;
unsigned long long int var_3 = 3755926258587768200ULL;
long long int var_4 = -6134111278123483234LL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 7286631120884706207LL;
unsigned char var_11 = (unsigned char)41;
int zero = 0;
unsigned long long int var_14 = 7584686615097788143ULL;
short var_15 = (short)-2064;
unsigned char var_16 = (unsigned char)122;
int var_17 = 1630687483;
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
