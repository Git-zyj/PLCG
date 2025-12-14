#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4966220237958787607ULL;
unsigned long long int var_15 = 15551819946644293241ULL;
int zero = 0;
long long int var_20 = 3717310436886613072LL;
signed char var_21 = (signed char)78;
signed char var_22 = (signed char)28;
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
