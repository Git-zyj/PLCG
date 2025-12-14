#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1723698649;
unsigned int var_4 = 3673296241U;
unsigned int var_5 = 3865918947U;
short var_10 = (short)-14234;
int zero = 0;
int var_15 = -1382972415;
int var_16 = -1407865216;
unsigned char var_17 = (unsigned char)211;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
