#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8487386563166948913LL;
long long int var_3 = 6368952493863648083LL;
long long int var_11 = 7491730805606007972LL;
int zero = 0;
long long int var_16 = -254297056930875344LL;
long long int var_17 = 8593297741677425861LL;
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
