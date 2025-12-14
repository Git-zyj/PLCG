#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 7575687U;
unsigned char var_2 = (unsigned char)144;
signed char var_3 = (signed char)8;
unsigned long long int var_5 = 2825392503125138144ULL;
unsigned int var_6 = 3153562484U;
short var_8 = (short)-13582;
short var_11 = (short)3755;
int zero = 0;
unsigned char var_12 = (unsigned char)59;
short var_13 = (short)14353;
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
