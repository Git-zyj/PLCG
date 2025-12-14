#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7218678532612910372LL;
long long int var_2 = -6206962760333398916LL;
unsigned short var_8 = (unsigned short)15470;
int zero = 0;
short var_11 = (short)27692;
unsigned short var_12 = (unsigned short)26029;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
