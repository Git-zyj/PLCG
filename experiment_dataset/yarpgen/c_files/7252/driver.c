#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)74;
unsigned long long int var_13 = 15482020152104591508ULL;
long long int var_16 = 592241827272623156LL;
int zero = 0;
short var_20 = (short)22196;
unsigned short var_21 = (unsigned short)27804;
void init() {
}

void checksum() {
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
