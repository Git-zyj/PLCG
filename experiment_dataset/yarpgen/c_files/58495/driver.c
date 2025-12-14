#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3848227422U;
int var_3 = 578027371;
unsigned short var_7 = (unsigned short)20910;
unsigned char var_8 = (unsigned char)91;
unsigned int var_9 = 208632503U;
int zero = 0;
unsigned short var_12 = (unsigned short)29232;
unsigned char var_13 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
