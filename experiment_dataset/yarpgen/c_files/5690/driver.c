#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4708;
short var_3 = (short)725;
short var_6 = (short)-20648;
unsigned int var_7 = 4148947824U;
short var_11 = (short)-10607;
short var_12 = (short)6204;
short var_16 = (short)-14830;
int zero = 0;
unsigned int var_17 = 343829770U;
unsigned short var_18 = (unsigned short)27699;
unsigned int var_19 = 3197461320U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
