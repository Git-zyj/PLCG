#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6610338624615686584LL;
unsigned long long int var_2 = 14112752547080649635ULL;
short var_3 = (short)-2061;
unsigned long long int var_7 = 10091025812948108323ULL;
signed char var_10 = (signed char)1;
unsigned char var_12 = (unsigned char)62;
int zero = 0;
signed char var_15 = (signed char)95;
long long int var_16 = -794723515800272853LL;
void init() {
}

void checksum() {
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
