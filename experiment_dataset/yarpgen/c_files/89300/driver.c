#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2053228679U;
unsigned long long int var_9 = 452972479243347377ULL;
short var_14 = (short)11974;
long long int var_17 = 6998885381105459855LL;
int zero = 0;
short var_20 = (short)-6528;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)29158;
unsigned short var_23 = (unsigned short)3783;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
