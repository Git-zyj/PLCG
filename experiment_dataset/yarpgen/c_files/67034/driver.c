#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-106;
unsigned short var_5 = (unsigned short)34976;
long long int var_7 = 3969819223367569609LL;
int zero = 0;
unsigned long long int var_20 = 869752571551311715ULL;
signed char var_21 = (signed char)99;
int var_22 = 1698221279;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
