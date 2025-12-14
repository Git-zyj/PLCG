#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -582675902;
long long int var_4 = 5885464860792769686LL;
unsigned char var_6 = (unsigned char)88;
signed char var_14 = (signed char)95;
signed char var_15 = (signed char)-117;
int zero = 0;
unsigned short var_17 = (unsigned short)7902;
short var_18 = (short)14518;
void init() {
}

void checksum() {
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
