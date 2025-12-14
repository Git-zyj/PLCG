#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)185;
unsigned long long int var_12 = 15376409722754637879ULL;
short var_13 = (short)-1921;
long long int var_15 = 1600409239392121551LL;
int zero = 0;
unsigned char var_19 = (unsigned char)171;
unsigned char var_20 = (unsigned char)95;
unsigned int var_21 = 2213920983U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
