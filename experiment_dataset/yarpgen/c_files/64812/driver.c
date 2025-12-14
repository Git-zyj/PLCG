#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10793995127998491799ULL;
int var_3 = 1308729272;
short var_6 = (short)32162;
unsigned char var_8 = (unsigned char)95;
short var_11 = (short)7075;
unsigned short var_14 = (unsigned short)13711;
int zero = 0;
unsigned long long int var_15 = 5256365479513600412ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)184;
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
