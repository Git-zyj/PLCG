#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1694091847;
unsigned int var_4 = 651925053U;
signed char var_8 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_13 = 17074645652266336236ULL;
signed char var_14 = (signed char)-126;
unsigned long long int var_15 = 7835980895292053205ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
