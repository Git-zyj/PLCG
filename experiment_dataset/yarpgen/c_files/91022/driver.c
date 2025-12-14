#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63278;
unsigned short var_5 = (unsigned short)30061;
long long int var_12 = -637512769933939243LL;
short var_14 = (short)8149;
int zero = 0;
unsigned long long int var_15 = 32759067521674994ULL;
int var_16 = -943237612;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
