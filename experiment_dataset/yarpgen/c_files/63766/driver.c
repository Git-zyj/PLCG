#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6591;
short var_3 = (short)32364;
unsigned long long int var_5 = 10465844230913234937ULL;
short var_10 = (short)-10805;
int zero = 0;
unsigned int var_20 = 2563315734U;
unsigned long long int var_21 = 11287332870794853889ULL;
short var_22 = (short)-24924;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
