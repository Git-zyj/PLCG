#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59267;
signed char var_2 = (signed char)-59;
int var_3 = -1169062327;
unsigned short var_9 = (unsigned short)13500;
signed char var_19 = (signed char)-79;
int zero = 0;
signed char var_20 = (signed char)4;
int var_21 = -558683589;
short var_22 = (short)-25723;
signed char var_23 = (signed char)78;
void init() {
}

void checksum() {
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
