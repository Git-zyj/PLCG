#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)18;
unsigned long long int var_8 = 7502796186839647459ULL;
signed char var_9 = (signed char)-24;
int zero = 0;
unsigned char var_13 = (unsigned char)206;
signed char var_14 = (signed char)66;
signed char var_15 = (signed char)86;
short var_16 = (short)20656;
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
