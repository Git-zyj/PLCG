#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2114943338713713167LL;
long long int var_8 = -8522291236677175390LL;
long long int var_10 = -7357665921789165762LL;
long long int var_13 = -302872193366462778LL;
int zero = 0;
long long int var_15 = -8234879848782326238LL;
long long int var_16 = -67684108250114892LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
