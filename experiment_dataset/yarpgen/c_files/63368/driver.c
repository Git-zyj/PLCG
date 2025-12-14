#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-88;
int var_17 = -1606289187;
unsigned long long int var_18 = 3706901578873045212ULL;
int zero = 0;
signed char var_19 = (signed char)95;
unsigned long long int var_20 = 18246126466275134020ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
