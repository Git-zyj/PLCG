#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 736771477;
unsigned long long int var_16 = 515104495030101174ULL;
long long int var_19 = 7339951505627500189LL;
int zero = 0;
unsigned char var_20 = (unsigned char)86;
unsigned int var_21 = 1336281995U;
short var_22 = (short)6771;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
