#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5407071745921745406LL;
long long int var_7 = -6445064895907095943LL;
unsigned char var_10 = (unsigned char)71;
signed char var_14 = (signed char)78;
unsigned int var_15 = 3379326346U;
int zero = 0;
unsigned long long int var_17 = 5971538693233871319ULL;
int var_18 = -782244603;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
