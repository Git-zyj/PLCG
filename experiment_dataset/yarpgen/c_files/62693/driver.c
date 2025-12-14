#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14706;
short var_3 = (short)20298;
short var_9 = (short)-29300;
unsigned int var_10 = 1229550160U;
short var_13 = (short)-25221;
int var_14 = -1468428564;
int var_17 = 967103709;
signed char var_18 = (signed char)81;
int zero = 0;
signed char var_19 = (signed char)94;
unsigned int var_20 = 3902906703U;
int var_21 = -1172843409;
unsigned int var_22 = 216905155U;
int var_23 = -1552480361;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
