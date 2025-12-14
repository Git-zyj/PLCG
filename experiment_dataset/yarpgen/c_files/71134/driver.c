#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2336383685340208777ULL;
short var_15 = (short)18556;
int zero = 0;
unsigned long long int var_18 = 10746541268717667797ULL;
unsigned char var_19 = (unsigned char)254;
unsigned int var_20 = 391609280U;
unsigned char var_21 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
