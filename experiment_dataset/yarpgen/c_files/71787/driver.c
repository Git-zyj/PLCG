#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5099;
unsigned char var_4 = (unsigned char)224;
unsigned short var_5 = (unsigned short)30443;
unsigned short var_8 = (unsigned short)51084;
signed char var_9 = (signed char)46;
int zero = 0;
unsigned short var_13 = (unsigned short)5835;
unsigned char var_14 = (unsigned char)88;
int var_15 = -1500464803;
unsigned short var_16 = (unsigned short)45588;
unsigned char var_17 = (unsigned char)131;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
