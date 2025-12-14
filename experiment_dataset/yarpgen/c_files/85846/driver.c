#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3016300636U;
unsigned int var_1 = 1559749222U;
_Bool var_2 = (_Bool)1;
int var_5 = 773984577;
unsigned int var_8 = 3910070763U;
unsigned char var_12 = (unsigned char)149;
int zero = 0;
unsigned long long int var_14 = 8458180649514422358ULL;
unsigned int var_15 = 3274240964U;
signed char var_16 = (signed char)76;
signed char var_17 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
