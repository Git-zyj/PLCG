#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)74;
unsigned char var_8 = (unsigned char)80;
long long int var_9 = 6736427628476354205LL;
signed char var_14 = (signed char)-2;
int zero = 0;
unsigned short var_17 = (unsigned short)33947;
int var_18 = 2010348955;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
