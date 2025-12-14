#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
unsigned int var_6 = 426769708U;
unsigned short var_7 = (unsigned short)57058;
unsigned short var_9 = (unsigned short)30049;
int zero = 0;
unsigned short var_10 = (unsigned short)3729;
unsigned short var_11 = (unsigned short)52550;
unsigned int var_12 = 1955976010U;
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
