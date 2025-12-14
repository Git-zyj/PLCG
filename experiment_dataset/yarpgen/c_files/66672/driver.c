#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1977;
signed char var_4 = (signed char)86;
signed char var_6 = (signed char)-43;
long long int var_9 = 8876669840402863788LL;
int zero = 0;
short var_11 = (short)-30112;
short var_12 = (short)-10780;
unsigned short var_13 = (unsigned short)23753;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
