#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6982471543282121935LL;
short var_4 = (short)23422;
unsigned short var_9 = (unsigned short)49789;
int var_13 = 2048251083;
int zero = 0;
long long int var_16 = 354498303152983569LL;
signed char var_17 = (signed char)-91;
void init() {
}

void checksum() {
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
