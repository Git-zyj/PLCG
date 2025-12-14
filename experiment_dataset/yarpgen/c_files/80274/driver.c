#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8738592583284405734ULL;
short var_4 = (short)30468;
unsigned int var_6 = 2482279649U;
unsigned long long int var_7 = 8638876951645666673ULL;
unsigned char var_9 = (unsigned char)22;
int zero = 0;
unsigned short var_10 = (unsigned short)29977;
long long int var_11 = -6953075458704646263LL;
unsigned int var_12 = 410937999U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
