#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1786890243;
unsigned short var_4 = (unsigned short)14263;
unsigned int var_5 = 2437898017U;
short var_6 = (short)-29996;
unsigned short var_9 = (unsigned short)36281;
unsigned int var_11 = 141072481U;
short var_17 = (short)5046;
int zero = 0;
unsigned short var_20 = (unsigned short)60849;
unsigned short var_21 = (unsigned short)16965;
unsigned int var_22 = 699172465U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
