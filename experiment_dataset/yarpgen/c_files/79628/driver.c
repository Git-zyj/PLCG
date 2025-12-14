#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -8245686183785237518LL;
unsigned long long int var_13 = 5156653033438291040ULL;
long long int var_15 = 6031584780147482014LL;
int zero = 0;
signed char var_17 = (signed char)-14;
unsigned char var_18 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
