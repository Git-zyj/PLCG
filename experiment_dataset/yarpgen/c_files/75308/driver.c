#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9531;
unsigned short var_2 = (unsigned short)58416;
short var_3 = (short)5008;
short var_7 = (short)14194;
unsigned char var_10 = (unsigned char)187;
signed char var_13 = (signed char)3;
int zero = 0;
int var_14 = 353332983;
unsigned char var_15 = (unsigned char)156;
signed char var_16 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
