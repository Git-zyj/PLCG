#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9864;
unsigned int var_2 = 1500518738U;
short var_3 = (short)3253;
signed char var_6 = (signed char)38;
short var_7 = (short)-55;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
unsigned long long int var_14 = 5831510529302180205ULL;
unsigned char var_15 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
