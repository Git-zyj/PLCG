#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2189866980U;
long long int var_3 = -5646995776507054449LL;
unsigned short var_7 = (unsigned short)19790;
short var_12 = (short)10821;
int zero = 0;
signed char var_15 = (signed char)-10;
unsigned char var_16 = (unsigned char)9;
signed char var_17 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
