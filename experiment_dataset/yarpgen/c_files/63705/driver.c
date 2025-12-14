#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -411567255;
unsigned int var_4 = 3940420998U;
int zero = 0;
long long int var_13 = 9220373278939972870LL;
unsigned long long int var_14 = 2534979086594136363ULL;
short var_15 = (short)20643;
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
