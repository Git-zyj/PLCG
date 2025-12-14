#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
short var_6 = (short)20816;
unsigned char var_12 = (unsigned char)94;
int zero = 0;
short var_13 = (short)12085;
int var_14 = 583358415;
unsigned long long int var_15 = 7451558695497124723ULL;
unsigned short var_16 = (unsigned short)35755;
short var_17 = (short)27383;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
