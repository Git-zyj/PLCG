#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)52347;
signed char var_6 = (signed char)11;
int var_7 = -213081785;
signed char var_9 = (signed char)59;
int zero = 0;
unsigned long long int var_14 = 11598155407984821604ULL;
signed char var_15 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
