#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2568;
_Bool var_2 = (_Bool)1;
int var_10 = -1380758153;
unsigned char var_12 = (unsigned char)64;
unsigned char var_14 = (unsigned char)76;
int zero = 0;
signed char var_16 = (signed char)-65;
unsigned char var_17 = (unsigned char)164;
void init() {
}

void checksum() {
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
