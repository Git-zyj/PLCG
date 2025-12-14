#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
short var_3 = (short)-18881;
unsigned char var_4 = (unsigned char)25;
short var_5 = (short)-32740;
long long int var_6 = 3090211518653542829LL;
unsigned int var_7 = 3989273696U;
signed char var_9 = (signed char)60;
_Bool var_12 = (_Bool)1;
long long int var_14 = 3589355211441789530LL;
int zero = 0;
signed char var_15 = (signed char)-64;
unsigned char var_16 = (unsigned char)171;
unsigned char var_17 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
