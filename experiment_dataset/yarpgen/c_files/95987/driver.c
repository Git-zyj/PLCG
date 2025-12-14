#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5030525550298873128LL;
unsigned short var_12 = (unsigned short)37590;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
short var_17 = (short)30590;
unsigned char var_18 = (unsigned char)216;
short var_19 = (short)6457;
short var_20 = (short)4970;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
