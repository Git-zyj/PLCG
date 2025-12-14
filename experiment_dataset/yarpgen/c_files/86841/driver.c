#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3131407991U;
long long int var_7 = 4121310444610074097LL;
long long int var_15 = -5778016365505707577LL;
int zero = 0;
unsigned short var_16 = (unsigned short)56491;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-27014;
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
