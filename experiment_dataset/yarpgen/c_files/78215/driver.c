#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2064139426;
long long int var_4 = 6153160893188390908LL;
int var_14 = -1399830170;
int var_17 = -1031059205;
int zero = 0;
unsigned char var_19 = (unsigned char)222;
unsigned char var_20 = (unsigned char)190;
unsigned short var_21 = (unsigned short)35494;
short var_22 = (short)29872;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
