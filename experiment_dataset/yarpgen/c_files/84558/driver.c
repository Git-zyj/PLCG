#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)81;
short var_6 = (short)19304;
short var_9 = (short)1473;
unsigned short var_10 = (unsigned short)2343;
int zero = 0;
unsigned int var_12 = 286388247U;
long long int var_13 = 4627259749812462804LL;
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
