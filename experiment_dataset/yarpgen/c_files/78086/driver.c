#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -804644239;
long long int var_4 = -2243566536249892455LL;
unsigned long long int var_11 = 4026590600516251166ULL;
unsigned short var_14 = (unsigned short)37693;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
int var_18 = 806544804;
void init() {
}

void checksum() {
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
