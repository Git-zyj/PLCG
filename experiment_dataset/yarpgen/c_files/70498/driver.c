#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 352337116392785706LL;
unsigned int var_4 = 2418618152U;
int var_11 = -1844313509;
int zero = 0;
signed char var_12 = (signed char)47;
signed char var_13 = (signed char)-40;
short var_14 = (short)-3029;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
