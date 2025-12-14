#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3745030141U;
unsigned int var_4 = 2540713711U;
unsigned int var_6 = 3552181976U;
short var_9 = (short)9745;
int var_14 = 1822217333;
unsigned short var_15 = (unsigned short)62880;
signed char var_16 = (signed char)-41;
int zero = 0;
signed char var_17 = (signed char)-57;
unsigned int var_18 = 1732066808U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
