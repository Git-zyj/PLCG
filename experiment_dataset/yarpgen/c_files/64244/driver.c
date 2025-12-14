#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2929504745U;
unsigned char var_9 = (unsigned char)105;
int var_14 = -538715704;
int zero = 0;
signed char var_19 = (signed char)65;
int var_20 = 22388077;
int var_21 = -1293093896;
signed char var_22 = (signed char)-32;
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
