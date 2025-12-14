#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -817914687;
unsigned int var_9 = 1083426724U;
int zero = 0;
unsigned int var_10 = 782791184U;
unsigned long long int var_11 = 9206379086199486803ULL;
signed char var_12 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
