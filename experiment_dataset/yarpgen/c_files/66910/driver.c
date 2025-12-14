#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14114;
int var_1 = -768800375;
unsigned short var_3 = (unsigned short)24524;
short var_4 = (short)-20207;
unsigned short var_6 = (unsigned short)35338;
unsigned short var_8 = (unsigned short)25185;
unsigned short var_9 = (unsigned short)33704;
unsigned short var_10 = (unsigned short)15312;
signed char var_11 = (signed char)-85;
int zero = 0;
signed char var_12 = (signed char)-33;
unsigned int var_13 = 3593091623U;
void init() {
}

void checksum() {
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
