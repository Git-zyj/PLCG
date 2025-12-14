#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
unsigned short var_2 = (unsigned short)11634;
short var_6 = (short)13004;
unsigned long long int var_7 = 1065148414270142959ULL;
int zero = 0;
short var_13 = (short)8187;
unsigned char var_14 = (unsigned char)119;
unsigned long long int var_15 = 16223959139011554198ULL;
int var_16 = -2020497373;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
