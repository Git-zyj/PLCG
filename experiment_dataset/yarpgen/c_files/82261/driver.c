#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned short var_3 = (unsigned short)18095;
unsigned int var_6 = 505652638U;
signed char var_7 = (signed char)-120;
short var_9 = (short)11745;
int zero = 0;
signed char var_10 = (signed char)-93;
unsigned int var_11 = 2706009909U;
signed char var_12 = (signed char)0;
unsigned int var_13 = 370012745U;
signed char var_14 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
