#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6382014931292600817LL;
unsigned long long int var_6 = 16095056052107283800ULL;
int var_13 = 2029295148;
unsigned int var_14 = 60852212U;
signed char var_18 = (signed char)91;
int zero = 0;
unsigned long long int var_19 = 663358244236241121ULL;
short var_20 = (short)-9630;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
