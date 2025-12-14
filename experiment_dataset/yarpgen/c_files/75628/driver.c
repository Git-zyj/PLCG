#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 910720766U;
unsigned int var_5 = 2496728293U;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
signed char var_11 = (signed char)123;
unsigned short var_12 = (unsigned short)56577;
unsigned int var_13 = 2213603670U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
