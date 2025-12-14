#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1644029966869265268ULL;
unsigned char var_2 = (unsigned char)92;
signed char var_3 = (signed char)3;
short var_4 = (short)6521;
short var_7 = (short)9503;
int zero = 0;
int var_12 = 12072876;
short var_13 = (short)-5361;
long long int var_14 = 3229286974131031364LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
