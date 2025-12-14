#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6296330829441924694ULL;
long long int var_2 = -555260697032460777LL;
short var_3 = (short)19542;
unsigned short var_5 = (unsigned short)25165;
unsigned char var_6 = (unsigned char)17;
int var_8 = 850716267;
int zero = 0;
int var_11 = 1835094652;
unsigned char var_12 = (unsigned char)203;
int var_13 = -2034752212;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
