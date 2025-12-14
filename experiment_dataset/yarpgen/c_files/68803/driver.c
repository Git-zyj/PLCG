#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)83;
signed char var_10 = (signed char)-84;
unsigned char var_11 = (unsigned char)249;
int zero = 0;
unsigned char var_13 = (unsigned char)165;
unsigned short var_14 = (unsigned short)30677;
unsigned short var_15 = (unsigned short)56021;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
