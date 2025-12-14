#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
unsigned long long int var_2 = 9290354455509097160ULL;
unsigned char var_6 = (unsigned char)75;
long long int var_14 = 7948869399559357935LL;
int zero = 0;
short var_16 = (short)20611;
unsigned short var_17 = (unsigned short)12382;
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
