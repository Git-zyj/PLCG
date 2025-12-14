#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -42281255;
unsigned short var_6 = (unsigned short)59475;
short var_17 = (short)-14075;
int zero = 0;
signed char var_20 = (signed char)-98;
signed char var_21 = (signed char)80;
long long int var_22 = 7707613092611797453LL;
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
