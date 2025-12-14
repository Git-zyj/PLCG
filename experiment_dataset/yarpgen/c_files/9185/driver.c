#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10374;
signed char var_5 = (signed char)12;
signed char var_6 = (signed char)35;
short var_7 = (short)9472;
int zero = 0;
short var_11 = (short)-15225;
signed char var_12 = (signed char)63;
short var_13 = (short)4103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
