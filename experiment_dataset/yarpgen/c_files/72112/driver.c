#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25517;
unsigned short var_3 = (unsigned short)44758;
unsigned char var_7 = (unsigned char)232;
signed char var_8 = (signed char)121;
unsigned long long int var_9 = 12905771291795842424ULL;
int zero = 0;
unsigned long long int var_10 = 4128124894109089072ULL;
unsigned long long int var_11 = 16860517914040502147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
