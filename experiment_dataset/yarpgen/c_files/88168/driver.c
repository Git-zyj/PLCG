#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3692;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 4048214249383008392ULL;
signed char var_7 = (signed char)64;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
short var_12 = (short)12125;
short var_13 = (short)13693;
void init() {
}

void checksum() {
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
