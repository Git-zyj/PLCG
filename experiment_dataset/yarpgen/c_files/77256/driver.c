#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
long long int var_2 = 6596991548947627653LL;
signed char var_4 = (signed char)-16;
unsigned short var_7 = (unsigned short)50401;
int zero = 0;
unsigned long long int var_10 = 3001677508634961269ULL;
unsigned short var_11 = (unsigned short)65499;
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
