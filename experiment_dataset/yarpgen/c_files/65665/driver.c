#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3320;
unsigned short var_14 = (unsigned short)44115;
unsigned short var_15 = (unsigned short)3766;
short var_17 = (short)19259;
int zero = 0;
short var_18 = (short)7544;
short var_19 = (short)-11386;
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
