#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1616794294;
signed char var_5 = (signed char)-103;
short var_6 = (short)21790;
signed char var_11 = (signed char)28;
long long int var_17 = -7586877658565091002LL;
int zero = 0;
unsigned int var_19 = 2521373128U;
unsigned char var_20 = (unsigned char)44;
void init() {
}

void checksum() {
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
