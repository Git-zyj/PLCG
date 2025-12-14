#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
int var_1 = 1145833616;
unsigned char var_5 = (unsigned char)142;
int var_12 = 1630597708;
int zero = 0;
unsigned int var_15 = 3190114604U;
short var_16 = (short)-16833;
long long int var_17 = 3377020660854420319LL;
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
