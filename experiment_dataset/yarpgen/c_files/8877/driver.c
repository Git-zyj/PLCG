#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8098710789354951842LL;
int var_5 = -919537539;
int var_8 = 1772911367;
int var_9 = -1626918141;
int zero = 0;
unsigned short var_10 = (unsigned short)4026;
unsigned short var_11 = (unsigned short)8642;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
