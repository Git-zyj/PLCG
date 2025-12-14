#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7612001532017406861LL;
short var_4 = (short)-2085;
unsigned long long int var_8 = 12434528884509688994ULL;
short var_9 = (short)-19951;
unsigned int var_10 = 2861857536U;
int zero = 0;
unsigned long long int var_12 = 12441458717275756295ULL;
short var_13 = (short)15865;
void init() {
}

void checksum() {
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
