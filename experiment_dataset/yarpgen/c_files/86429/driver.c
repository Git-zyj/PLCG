#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36272;
int var_2 = 1434252852;
short var_3 = (short)-28893;
unsigned short var_7 = (unsigned short)24073;
unsigned short var_9 = (unsigned short)37801;
unsigned short var_12 = (unsigned short)48470;
short var_16 = (short)25271;
signed char var_17 = (signed char)52;
int zero = 0;
unsigned short var_20 = (unsigned short)21903;
unsigned short var_21 = (unsigned short)35916;
unsigned short var_22 = (unsigned short)5368;
unsigned short var_23 = (unsigned short)10025;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
