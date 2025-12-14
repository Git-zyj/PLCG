#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14580821757292009322ULL;
signed char var_11 = (signed char)45;
unsigned short var_14 = (unsigned short)1505;
int zero = 0;
signed char var_16 = (signed char)-72;
unsigned char var_17 = (unsigned char)104;
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
