#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned int var_1 = 2230532078U;
unsigned char var_2 = (unsigned char)192;
short var_3 = (short)-18320;
long long int var_4 = 3861567797172841733LL;
unsigned long long int var_6 = 5076095639121716520ULL;
unsigned char var_10 = (unsigned char)67;
long long int var_13 = 310502863342240325LL;
int zero = 0;
signed char var_16 = (signed char)-121;
unsigned int var_17 = 4089073205U;
void init() {
}

void checksum() {
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
