#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9402;
short var_2 = (short)24285;
short var_3 = (short)11464;
signed char var_5 = (signed char)68;
short var_6 = (short)8151;
short var_7 = (short)-6333;
short var_9 = (short)-9298;
short var_11 = (short)-19592;
signed char var_13 = (signed char)-85;
short var_14 = (short)30292;
short var_15 = (short)26073;
int zero = 0;
short var_16 = (short)-3151;
short var_17 = (short)27120;
signed char var_18 = (signed char)-21;
signed char var_19 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
