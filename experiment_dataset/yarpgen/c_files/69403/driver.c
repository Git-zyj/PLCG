#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30355;
short var_2 = (short)21677;
unsigned char var_3 = (unsigned char)40;
unsigned long long int var_5 = 17413757675676132833ULL;
unsigned int var_9 = 309958777U;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-85;
unsigned short var_13 = (unsigned short)19299;
int zero = 0;
unsigned int var_14 = 615419290U;
unsigned int var_15 = 1053283404U;
signed char var_16 = (signed char)52;
void init() {
}

void checksum() {
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
