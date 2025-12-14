#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 982835259206521294LL;
unsigned char var_10 = (unsigned char)215;
unsigned short var_12 = (unsigned short)49231;
unsigned short var_13 = (unsigned short)44580;
int zero = 0;
short var_16 = (short)-1718;
unsigned short var_17 = (unsigned short)43275;
void init() {
}

void checksum() {
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
