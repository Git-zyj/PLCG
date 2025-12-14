#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -573973622691176425LL;
signed char var_4 = (signed char)-112;
unsigned long long int var_6 = 866795866381120434ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)47077;
signed char var_13 = (signed char)-94;
short var_14 = (short)-10531;
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
