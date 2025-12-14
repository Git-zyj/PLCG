#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 406807515;
unsigned char var_4 = (unsigned char)185;
int var_7 = -1158563504;
int zero = 0;
unsigned short var_14 = (unsigned short)31279;
signed char var_15 = (signed char)-21;
unsigned char var_16 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
