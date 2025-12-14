#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30880;
short var_2 = (short)-15484;
short var_3 = (short)-9316;
short var_7 = (short)-10725;
short var_11 = (short)-4157;
short var_15 = (short)-18140;
int zero = 0;
short var_16 = (short)25738;
short var_17 = (short)14935;
short var_18 = (short)-29344;
short var_19 = (short)-9070;
short var_20 = (short)-20659;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
