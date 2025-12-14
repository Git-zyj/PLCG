#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19706;
signed char var_7 = (signed char)57;
signed char var_8 = (signed char)66;
short var_9 = (short)-14453;
short var_10 = (short)-17083;
signed char var_12 = (signed char)11;
short var_19 = (short)22135;
int zero = 0;
short var_20 = (short)-17283;
short var_21 = (short)-17163;
signed char var_22 = (signed char)126;
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
