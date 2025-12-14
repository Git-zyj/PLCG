#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_15 = 9012280612947322502ULL;
unsigned int var_16 = 3300975142U;
unsigned int var_18 = 982946039U;
int zero = 0;
short var_19 = (short)28129;
long long int var_20 = -8652816966794213489LL;
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
