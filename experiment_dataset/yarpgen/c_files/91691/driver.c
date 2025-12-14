#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2055090941;
unsigned long long int var_3 = 9389021401701032971ULL;
unsigned int var_7 = 3993386974U;
int zero = 0;
unsigned short var_13 = (unsigned short)60883;
unsigned short var_14 = (unsigned short)59031;
void init() {
}

void checksum() {
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
