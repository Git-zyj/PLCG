#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned long long int var_4 = 10044815357428616388ULL;
int var_12 = -1706239438;
int zero = 0;
unsigned long long int var_14 = 11777609569967417861ULL;
long long int var_15 = 5538078210928231484LL;
unsigned char var_16 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
