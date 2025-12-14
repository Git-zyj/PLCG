#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19375;
unsigned char var_6 = (unsigned char)6;
int var_8 = 1683725226;
unsigned int var_9 = 3079259156U;
int zero = 0;
unsigned char var_18 = (unsigned char)13;
signed char var_19 = (signed char)-113;
void init() {
}

void checksum() {
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
