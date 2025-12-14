#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -25412672;
unsigned short var_1 = (unsigned short)20723;
signed char var_3 = (signed char)94;
int var_5 = 264043030;
unsigned short var_6 = (unsigned short)35472;
int var_8 = -750740698;
unsigned short var_12 = (unsigned short)4101;
int zero = 0;
short var_13 = (short)17954;
int var_14 = -195713053;
short var_15 = (short)-31791;
void init() {
}

void checksum() {
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
