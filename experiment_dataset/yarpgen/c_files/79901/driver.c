#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17427301350492966713ULL;
short var_5 = (short)9210;
signed char var_6 = (signed char)-52;
unsigned long long int var_7 = 8880556128925512324ULL;
short var_8 = (short)9881;
unsigned long long int var_9 = 3033774513108539398ULL;
int zero = 0;
int var_10 = 222867905;
signed char var_11 = (signed char)123;
unsigned int var_12 = 1081724971U;
signed char var_13 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
