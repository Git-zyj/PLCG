#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-62;
signed char var_4 = (signed char)-47;
signed char var_6 = (signed char)86;
signed char var_8 = (signed char)-32;
signed char var_9 = (signed char)-23;
signed char var_10 = (signed char)48;
signed char var_13 = (signed char)-15;
signed char var_16 = (signed char)125;
int zero = 0;
signed char var_17 = (signed char)114;
signed char var_18 = (signed char)-16;
signed char var_19 = (signed char)-61;
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
