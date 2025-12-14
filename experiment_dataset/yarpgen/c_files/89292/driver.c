#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
short var_4 = (short)13736;
unsigned int var_7 = 1004580726U;
int zero = 0;
unsigned int var_12 = 3483323072U;
unsigned int var_13 = 2656894895U;
long long int var_14 = -1513138756085110095LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
