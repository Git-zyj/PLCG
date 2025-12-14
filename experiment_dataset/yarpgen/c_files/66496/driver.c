#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-103;
signed char var_3 = (signed char)-71;
unsigned int var_17 = 2300476125U;
int zero = 0;
short var_18 = (short)14659;
unsigned short var_19 = (unsigned short)24099;
unsigned int var_20 = 2772827308U;
unsigned char var_21 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
