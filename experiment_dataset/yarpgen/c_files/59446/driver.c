#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-13223;
unsigned int var_6 = 208345785U;
int var_7 = 1229345948;
int zero = 0;
unsigned long long int var_12 = 7518450589049831622ULL;
unsigned long long int var_13 = 10646871046115364774ULL;
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
