#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19425;
_Bool var_3 = (_Bool)0;
long long int var_6 = -4283898539210372304LL;
short var_12 = (short)15131;
unsigned short var_13 = (unsigned short)29544;
int zero = 0;
unsigned char var_16 = (unsigned char)177;
short var_17 = (short)-22643;
unsigned char var_18 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
