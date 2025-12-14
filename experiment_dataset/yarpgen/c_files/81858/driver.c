#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 362769739U;
signed char var_9 = (signed char)-67;
long long int var_12 = -406869630504905886LL;
int zero = 0;
short var_15 = (short)4864;
int var_16 = 1118108101;
unsigned char var_17 = (unsigned char)223;
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
