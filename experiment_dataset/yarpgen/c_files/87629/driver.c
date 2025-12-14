#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned char var_5 = (unsigned char)87;
short var_10 = (short)-12570;
unsigned char var_13 = (unsigned char)188;
short var_14 = (short)-14953;
long long int var_17 = 594764245157990049LL;
int zero = 0;
unsigned char var_18 = (unsigned char)209;
short var_19 = (short)23404;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
