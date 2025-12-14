#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18758;
int var_3 = -673225966;
long long int var_5 = 8829700403143656889LL;
unsigned short var_7 = (unsigned short)59753;
long long int var_9 = 3566988507490705111LL;
short var_10 = (short)-25236;
unsigned int var_11 = 3020594632U;
int zero = 0;
unsigned int var_12 = 36327675U;
signed char var_13 = (signed char)104;
long long int var_14 = -6589968848389326998LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
