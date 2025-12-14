#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-36;
unsigned short var_3 = (unsigned short)39701;
long long int var_6 = -9149890759792794935LL;
short var_7 = (short)-31739;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 10837206812770702700ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
