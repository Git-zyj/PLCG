#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)5;
unsigned long long int var_3 = 2294097097140637525ULL;
short var_7 = (short)-2021;
unsigned char var_10 = (unsigned char)222;
long long int var_13 = 7848516243368681241LL;
int zero = 0;
signed char var_14 = (signed char)120;
int var_15 = -1581210563;
signed char var_16 = (signed char)-5;
unsigned long long int var_17 = 7245405346950263462ULL;
unsigned char var_18 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
