#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)141;
unsigned char var_13 = (unsigned char)78;
unsigned char var_14 = (unsigned char)84;
unsigned char var_17 = (unsigned char)169;
int zero = 0;
unsigned char var_19 = (unsigned char)5;
int var_20 = -1609868548;
long long int var_21 = 3193345202885310684LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
