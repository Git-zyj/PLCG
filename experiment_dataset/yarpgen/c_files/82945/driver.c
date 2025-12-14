#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1840566294326348649LL;
long long int var_5 = -4463527667314855925LL;
long long int var_11 = 1038539902748542277LL;
long long int var_13 = -919776951075889071LL;
long long int var_17 = -4764090021683224690LL;
int zero = 0;
long long int var_19 = -1235158363043913494LL;
long long int var_20 = 6035052146063293452LL;
void init() {
}

void checksum() {
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
