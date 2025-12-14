#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -2860322435657660467LL;
unsigned char var_6 = (unsigned char)74;
short var_8 = (short)-28875;
signed char var_11 = (signed char)108;
int zero = 0;
unsigned char var_12 = (unsigned char)19;
int var_13 = -1355133153;
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
