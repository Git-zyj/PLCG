#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25533;
short var_3 = (short)-3623;
signed char var_8 = (signed char)17;
unsigned int var_10 = 460644023U;
signed char var_11 = (signed char)9;
unsigned short var_13 = (unsigned short)32747;
int zero = 0;
int var_19 = -176961717;
unsigned char var_20 = (unsigned char)252;
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
