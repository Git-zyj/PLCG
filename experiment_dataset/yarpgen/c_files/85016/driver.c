#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)6270;
signed char var_6 = (signed char)17;
signed char var_7 = (signed char)-74;
signed char var_9 = (signed char)-3;
signed char var_10 = (signed char)-49;
short var_11 = (short)-3325;
short var_12 = (short)-13993;
signed char var_13 = (signed char)103;
int zero = 0;
short var_14 = (short)-7465;
short var_15 = (short)-15795;
long long int var_16 = 2052439524708868207LL;
short var_17 = (short)14390;
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
