#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)32433;
int var_5 = -1440234814;
unsigned int var_6 = 538279125U;
unsigned short var_7 = (unsigned short)60562;
unsigned int var_8 = 3595868574U;
int zero = 0;
short var_10 = (short)-9934;
signed char var_11 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
