#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)106;
short var_2 = (short)22371;
unsigned char var_10 = (unsigned char)81;
int zero = 0;
unsigned char var_15 = (unsigned char)221;
short var_16 = (short)22638;
unsigned char var_17 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
