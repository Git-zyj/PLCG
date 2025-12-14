#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15108716525643640787ULL;
unsigned int var_5 = 3973692242U;
unsigned int var_9 = 1245064971U;
unsigned long long int var_11 = 16286277358597056685ULL;
short var_12 = (short)30850;
int zero = 0;
unsigned int var_14 = 2675727210U;
unsigned long long int var_15 = 11680775127089798482ULL;
void init() {
}

void checksum() {
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
