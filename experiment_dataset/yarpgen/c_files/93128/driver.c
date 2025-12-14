#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-36;
int var_8 = -1846032284;
int zero = 0;
int var_10 = -435334932;
signed char var_11 = (signed char)-88;
unsigned long long int var_12 = 16884924131794511768ULL;
unsigned long long int var_13 = 1345377133871340656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
