#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8283330878800048832LL;
long long int var_5 = 8101277089048460057LL;
signed char var_10 = (signed char)65;
int zero = 0;
short var_13 = (short)-6344;
unsigned char var_14 = (unsigned char)112;
unsigned short var_15 = (unsigned short)14799;
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
