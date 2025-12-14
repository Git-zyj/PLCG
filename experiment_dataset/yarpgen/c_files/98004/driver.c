#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 193696171903705281ULL;
unsigned long long int var_7 = 7647015794448768095ULL;
unsigned long long int var_9 = 4593057234343988068ULL;
int zero = 0;
unsigned long long int var_18 = 2948017721545509777ULL;
unsigned long long int var_19 = 16003763075497818253ULL;
void init() {
}

void checksum() {
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
