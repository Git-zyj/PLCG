#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)452;
unsigned char var_2 = (unsigned char)159;
short var_6 = (short)11718;
unsigned char var_8 = (unsigned char)103;
signed char var_9 = (signed char)102;
signed char var_11 = (signed char)-108;
signed char var_13 = (signed char)8;
int zero = 0;
signed char var_15 = (signed char)-126;
signed char var_16 = (signed char)37;
short var_17 = (short)28864;
short var_18 = (short)13029;
void init() {
}

void checksum() {
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
