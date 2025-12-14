#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned int var_7 = 1702950122U;
int zero = 0;
long long int var_10 = 7149943378652897202LL;
unsigned char var_11 = (unsigned char)26;
signed char var_12 = (signed char)-58;
unsigned short var_13 = (unsigned short)29010;
signed char var_14 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
