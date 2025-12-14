#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
unsigned char var_6 = (unsigned char)226;
unsigned char var_12 = (unsigned char)136;
int zero = 0;
long long int var_15 = -1206737862346207858LL;
short var_16 = (short)-15177;
unsigned int var_17 = 2277930024U;
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
