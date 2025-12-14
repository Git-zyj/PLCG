#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 14810224698912561088ULL;
short var_14 = (short)-589;
int zero = 0;
long long int var_16 = 3679091643948316482LL;
long long int var_17 = -4260093142977426978LL;
unsigned long long int var_18 = 11763350536014099348ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
