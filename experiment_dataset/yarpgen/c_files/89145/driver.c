#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)87;
long long int var_6 = 2260046112612674784LL;
unsigned long long int var_8 = 981559174613537929ULL;
signed char var_10 = (signed char)53;
int zero = 0;
unsigned int var_12 = 1927928600U;
unsigned long long int var_13 = 7386474062867758797ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
