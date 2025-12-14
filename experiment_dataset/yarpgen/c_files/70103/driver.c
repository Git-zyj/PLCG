#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2019008766U;
unsigned int var_1 = 3478731101U;
short var_13 = (short)3585;
int zero = 0;
unsigned int var_17 = 3665603725U;
short var_18 = (short)3831;
unsigned short var_19 = (unsigned short)21133;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
