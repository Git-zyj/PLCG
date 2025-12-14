#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 658851568U;
long long int var_1 = -7831127909069288469LL;
unsigned char var_2 = (unsigned char)225;
unsigned int var_4 = 2383423095U;
int var_15 = -1057279663;
int zero = 0;
short var_16 = (short)-9179;
short var_17 = (short)18762;
short var_18 = (short)32455;
signed char var_19 = (signed char)114;
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
