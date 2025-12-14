#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = 356805335;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
unsigned long long int var_14 = 11740702385466909731ULL;
short var_15 = (short)-19365;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3894179823U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
