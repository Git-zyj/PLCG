#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)35791;
unsigned char var_12 = (unsigned char)47;
int var_13 = 1622687941;
int zero = 0;
int var_20 = 1921293132;
long long int var_21 = -4602954007344687520LL;
long long int var_22 = -2689187117603905182LL;
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
