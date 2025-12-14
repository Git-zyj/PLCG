#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40509;
unsigned short var_4 = (unsigned short)18894;
unsigned int var_6 = 319220801U;
short var_11 = (short)-12457;
unsigned char var_14 = (unsigned char)218;
unsigned int var_15 = 1078878662U;
int zero = 0;
unsigned int var_20 = 637391607U;
unsigned char var_21 = (unsigned char)217;
void init() {
}

void checksum() {
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
