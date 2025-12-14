#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned long long int var_11 = 7822123576732962718ULL;
int zero = 0;
short var_12 = (short)-3459;
short var_13 = (short)-29924;
unsigned long long int var_14 = 5551958021381526362ULL;
long long int var_15 = 7456639004178138815LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
