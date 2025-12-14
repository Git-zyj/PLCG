#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
unsigned long long int var_9 = 11298253279302885152ULL;
unsigned long long int var_15 = 3390463889377726668ULL;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned long long int var_17 = 495665577539265791ULL;
void init() {
}

void checksum() {
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
