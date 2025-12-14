#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37487;
short var_1 = (short)-11560;
signed char var_2 = (signed char)102;
unsigned short var_4 = (unsigned short)44919;
short var_6 = (short)-18827;
signed char var_10 = (signed char)22;
int var_11 = 2131898344;
signed char var_12 = (signed char)-14;
int zero = 0;
short var_13 = (short)-17233;
short var_14 = (short)8978;
signed char var_15 = (signed char)-2;
signed char var_16 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
