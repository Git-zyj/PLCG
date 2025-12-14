#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
unsigned int var_3 = 774483864U;
unsigned int var_5 = 3829265170U;
unsigned char var_7 = (unsigned char)226;
int zero = 0;
unsigned short var_13 = (unsigned short)44713;
unsigned long long int var_14 = 7189602833558477672ULL;
short var_15 = (short)-14381;
unsigned int var_16 = 3788472394U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
