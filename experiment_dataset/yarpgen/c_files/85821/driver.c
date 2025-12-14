#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -658781573;
unsigned int var_9 = 4100588369U;
long long int var_11 = 1305769481903469143LL;
int zero = 0;
signed char var_18 = (signed char)88;
short var_19 = (short)-29699;
unsigned char var_20 = (unsigned char)99;
unsigned int var_21 = 2815237151U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
