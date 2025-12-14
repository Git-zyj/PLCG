#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8200;
unsigned long long int var_5 = 1368970951976257153ULL;
unsigned char var_6 = (unsigned char)190;
int var_7 = 1083080661;
int zero = 0;
unsigned char var_10 = (unsigned char)26;
signed char var_11 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
