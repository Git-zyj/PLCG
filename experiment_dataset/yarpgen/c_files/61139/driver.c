#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-5770;
short var_9 = (short)-25512;
short var_11 = (short)6394;
long long int var_14 = 3808115732360365368LL;
signed char var_15 = (signed char)-125;
int zero = 0;
signed char var_16 = (signed char)48;
short var_17 = (short)-9903;
signed char var_18 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
