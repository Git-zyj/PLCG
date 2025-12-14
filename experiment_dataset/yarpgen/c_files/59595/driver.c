#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26254;
long long int var_6 = 7110626829508431916LL;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
short var_16 = (short)-18096;
unsigned short var_17 = (unsigned short)61037;
short var_18 = (short)5502;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
