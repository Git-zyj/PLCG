#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1038460318;
int var_2 = -1117025948;
int var_3 = 2121389712;
signed char var_5 = (signed char)44;
int zero = 0;
int var_11 = 775362750;
short var_12 = (short)-28253;
int var_13 = -1589817867;
short var_14 = (short)3117;
void init() {
}

void checksum() {
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
