#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9972285113493075214ULL;
long long int var_9 = -5323750227502708619LL;
unsigned int var_12 = 3597128344U;
int zero = 0;
unsigned int var_15 = 3707815332U;
int var_16 = 1153794667;
void init() {
}

void checksum() {
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
