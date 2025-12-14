#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)91;
signed char var_11 = (signed char)-21;
int zero = 0;
unsigned int var_16 = 3778618336U;
signed char var_17 = (signed char)63;
unsigned long long int var_18 = 12281116788342997117ULL;
signed char var_19 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
