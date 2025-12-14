#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2569668008U;
short var_1 = (short)-28818;
signed char var_2 = (signed char)111;
unsigned char var_9 = (unsigned char)238;
int zero = 0;
int var_14 = -2126525644;
short var_15 = (short)-9779;
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
