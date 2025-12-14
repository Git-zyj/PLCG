#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7200590166580480478LL;
unsigned long long int var_6 = 11600365126179056947ULL;
int var_10 = -362362688;
int zero = 0;
unsigned int var_16 = 3062972004U;
signed char var_17 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
