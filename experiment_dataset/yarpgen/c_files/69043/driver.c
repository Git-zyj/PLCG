#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26342;
short var_7 = (short)-3944;
int var_9 = -1637293200;
short var_10 = (short)-8586;
int var_11 = 160202357;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
signed char var_15 = (signed char)30;
long long int var_16 = 5356854920897255607LL;
unsigned int var_17 = 3148736069U;
unsigned short var_18 = (unsigned short)45304;
short var_19 = (short)-10108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
