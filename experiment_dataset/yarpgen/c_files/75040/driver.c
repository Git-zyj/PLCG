#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4097059880551542927LL;
short var_1 = (short)14792;
int var_3 = 1503925216;
long long int var_10 = 6911351968456540576LL;
int var_11 = 1886185896;
int zero = 0;
int var_13 = -268772852;
signed char var_14 = (signed char)-17;
void init() {
}

void checksum() {
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
