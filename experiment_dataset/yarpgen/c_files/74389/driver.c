#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7585288579524789702LL;
long long int var_10 = -1952793094434765957LL;
short var_15 = (short)14626;
int zero = 0;
long long int var_17 = -1814025011788255674LL;
long long int var_18 = 8446220272198853916LL;
unsigned int var_19 = 1489595415U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
