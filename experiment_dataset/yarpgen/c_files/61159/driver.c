#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15814;
long long int var_3 = 7674223513513179501LL;
short var_4 = (short)24963;
unsigned char var_7 = (unsigned char)102;
long long int var_12 = -6053132512918123630LL;
int zero = 0;
long long int var_15 = 5986094902115237905LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
