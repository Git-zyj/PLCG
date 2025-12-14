#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
signed char var_2 = (signed char)-11;
unsigned char var_3 = (unsigned char)49;
signed char var_6 = (signed char)-86;
signed char var_9 = (signed char)58;
int zero = 0;
signed char var_12 = (signed char)-14;
signed char var_13 = (signed char)81;
unsigned char var_14 = (unsigned char)123;
unsigned char var_15 = (unsigned char)24;
unsigned char var_16 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
