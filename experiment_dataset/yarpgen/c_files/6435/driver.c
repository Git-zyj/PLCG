#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
int var_3 = 353264047;
int var_6 = -482937703;
unsigned int var_9 = 403543809U;
long long int var_11 = 8909291478319606589LL;
int var_14 = -1401037035;
int zero = 0;
unsigned int var_15 = 2163655552U;
unsigned char var_16 = (unsigned char)24;
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
