#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -766566265;
unsigned char var_10 = (unsigned char)9;
unsigned int var_13 = 1237210177U;
int zero = 0;
long long int var_20 = 3340743602732713077LL;
short var_21 = (short)-29221;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
