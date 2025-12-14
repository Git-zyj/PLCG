#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3583966040661473882LL;
unsigned char var_2 = (unsigned char)180;
signed char var_8 = (signed char)41;
short var_9 = (short)-1867;
int zero = 0;
unsigned int var_11 = 3663764287U;
unsigned char var_12 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
