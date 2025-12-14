#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -87151585;
short var_2 = (short)1869;
signed char var_14 = (signed char)19;
unsigned short var_15 = (unsigned short)14740;
int zero = 0;
short var_18 = (short)-20704;
unsigned short var_19 = (unsigned short)43342;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
