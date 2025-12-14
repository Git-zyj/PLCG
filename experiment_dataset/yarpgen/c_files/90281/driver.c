#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55811;
long long int var_1 = 4754392003334861427LL;
unsigned short var_3 = (unsigned short)44909;
unsigned char var_4 = (unsigned char)100;
int var_8 = 602441657;
int zero = 0;
long long int var_14 = -1740810446136135989LL;
unsigned short var_15 = (unsigned short)57888;
unsigned int var_16 = 1611639018U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
