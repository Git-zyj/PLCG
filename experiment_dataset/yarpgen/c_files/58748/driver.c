#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2981825000332325870LL;
unsigned long long int var_11 = 10982466547017728708ULL;
int zero = 0;
unsigned int var_19 = 3417167994U;
int var_20 = 633159693;
long long int var_21 = -7138118752851824122LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
