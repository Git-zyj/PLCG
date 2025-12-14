#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1651354637U;
unsigned short var_12 = (unsigned short)33861;
unsigned int var_15 = 1642911755U;
unsigned short var_16 = (unsigned short)64411;
signed char var_17 = (signed char)94;
signed char var_18 = (signed char)-90;
unsigned long long int var_19 = 13167482161150919259ULL;
int zero = 0;
signed char var_20 = (signed char)-70;
int var_21 = -360194747;
long long int var_22 = 9018622015497987370LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
