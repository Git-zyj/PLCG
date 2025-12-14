#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8601793818379114485LL;
short var_2 = (short)-4890;
int var_3 = -1860346150;
unsigned short var_4 = (unsigned short)15542;
unsigned char var_5 = (unsigned char)242;
unsigned int var_7 = 2653238128U;
signed char var_9 = (signed char)36;
unsigned int var_11 = 3702457477U;
int zero = 0;
short var_15 = (short)6072;
unsigned char var_16 = (unsigned char)71;
unsigned char var_17 = (unsigned char)140;
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
