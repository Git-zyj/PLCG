#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)5382;
long long int var_8 = 7942810620119801343LL;
signed char var_13 = (signed char)26;
int zero = 0;
unsigned long long int var_16 = 6638983492321962679ULL;
unsigned short var_17 = (unsigned short)14834;
unsigned long long int var_18 = 12353718214495797930ULL;
int var_19 = -130626024;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
