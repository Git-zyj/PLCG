#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2431434495U;
short var_2 = (short)-15088;
_Bool var_12 = (_Bool)0;
short var_15 = (short)19669;
int zero = 0;
long long int var_20 = -3983861237517430177LL;
int var_21 = 1419274115;
unsigned char var_22 = (unsigned char)180;
unsigned short var_23 = (unsigned short)27029;
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
