#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3647978534128353164LL;
unsigned int var_4 = 2084685471U;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
short var_16 = (short)32148;
unsigned long long int var_17 = 5414794710414084428ULL;
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
