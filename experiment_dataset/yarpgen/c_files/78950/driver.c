#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 908262925U;
unsigned int var_7 = 3120095479U;
unsigned int var_8 = 2381071875U;
unsigned int var_11 = 1538061816U;
int zero = 0;
unsigned int var_12 = 3133729323U;
unsigned int var_13 = 1481828454U;
unsigned int var_14 = 3333166436U;
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
