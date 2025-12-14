#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15403;
unsigned int var_1 = 228085533U;
long long int var_3 = 5937367475251803993LL;
unsigned long long int var_4 = 518897243376035061ULL;
long long int var_5 = 1710905721993490586LL;
unsigned long long int var_6 = 13883567042099880879ULL;
int zero = 0;
int var_10 = 365413742;
unsigned int var_11 = 1200249350U;
unsigned int var_12 = 1819899322U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
