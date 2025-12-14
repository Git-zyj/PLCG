#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1370099885622742187LL;
short var_8 = (short)1144;
short var_14 = (short)26339;
int zero = 0;
int var_17 = -842187841;
short var_18 = (short)-3812;
unsigned char var_19 = (unsigned char)22;
unsigned short var_20 = (unsigned short)15604;
void init() {
}

void checksum() {
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
