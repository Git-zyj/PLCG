#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
unsigned char var_3 = (unsigned char)34;
int var_4 = -1132604754;
short var_5 = (short)6608;
short var_7 = (short)-8188;
short var_12 = (short)-31399;
signed char var_14 = (signed char)11;
int zero = 0;
unsigned int var_15 = 192343990U;
int var_16 = -198265893;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
