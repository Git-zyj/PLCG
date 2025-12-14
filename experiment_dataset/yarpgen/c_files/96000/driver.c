#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
signed char var_2 = (signed char)59;
signed char var_3 = (signed char)-96;
signed char var_4 = (signed char)-12;
signed char var_5 = (signed char)-110;
signed char var_7 = (signed char)-65;
signed char var_8 = (signed char)2;
signed char var_10 = (signed char)-55;
signed char var_12 = (signed char)-101;
int zero = 0;
signed char var_14 = (signed char)-73;
signed char var_15 = (signed char)-126;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)89;
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
