#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 82897758983550286LL;
long long int var_2 = 964581703903703914LL;
long long int var_5 = 8742317657106886517LL;
unsigned int var_6 = 2475584510U;
int zero = 0;
short var_10 = (short)18383;
unsigned long long int var_11 = 743465528899830309ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
