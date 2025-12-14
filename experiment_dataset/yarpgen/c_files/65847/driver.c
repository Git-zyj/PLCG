#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4033049076U;
long long int var_10 = 3296442299640927149LL;
signed char var_15 = (signed char)-45;
int zero = 0;
signed char var_18 = (signed char)-117;
unsigned int var_19 = 1164468952U;
unsigned long long int var_20 = 16281009191633539408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
