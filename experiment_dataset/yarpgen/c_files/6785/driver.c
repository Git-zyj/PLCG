#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2021756480108873387ULL;
short var_6 = (short)-17980;
short var_8 = (short)19344;
int zero = 0;
unsigned int var_15 = 1195355409U;
signed char var_16 = (signed char)55;
unsigned long long int var_17 = 18351681450246404876ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
