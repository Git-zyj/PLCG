#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7566915470182835209ULL;
unsigned long long int var_11 = 15198763697189810360ULL;
short var_14 = (short)-32201;
int zero = 0;
unsigned long long int var_20 = 14534295958297372553ULL;
unsigned long long int var_21 = 15963057655093874452ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
