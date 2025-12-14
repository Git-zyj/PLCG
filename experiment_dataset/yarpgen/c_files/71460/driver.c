#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -784254466;
unsigned char var_2 = (unsigned char)170;
unsigned char var_5 = (unsigned char)182;
short var_8 = (short)-16439;
unsigned short var_12 = (unsigned short)43495;
int zero = 0;
int var_13 = 716518412;
unsigned char var_14 = (unsigned char)252;
signed char var_15 = (signed char)-68;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
