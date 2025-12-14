#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3561;
unsigned short var_2 = (unsigned short)53426;
signed char var_3 = (signed char)-86;
int var_12 = -1355454559;
int zero = 0;
int var_16 = 1684699818;
unsigned short var_17 = (unsigned short)44850;
int var_18 = -108086834;
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
