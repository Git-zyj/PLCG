#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -147898687;
unsigned short var_1 = (unsigned short)59030;
unsigned char var_3 = (unsigned char)36;
short var_6 = (short)2821;
short var_7 = (short)-30742;
unsigned int var_8 = 2926473815U;
unsigned int var_9 = 1098112665U;
signed char var_12 = (signed char)61;
unsigned char var_13 = (unsigned char)185;
unsigned char var_18 = (unsigned char)87;
int zero = 0;
long long int var_20 = 8947423617519052246LL;
unsigned short var_21 = (unsigned short)26241;
short var_22 = (short)30895;
int var_23 = 1772957548;
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
