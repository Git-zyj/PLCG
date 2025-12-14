#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16711;
signed char var_4 = (signed char)-68;
unsigned char var_11 = (unsigned char)88;
long long int var_13 = 3355224681109393701LL;
int zero = 0;
short var_16 = (short)-20072;
long long int var_17 = 218527097955336284LL;
unsigned short var_18 = (unsigned short)1106;
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
