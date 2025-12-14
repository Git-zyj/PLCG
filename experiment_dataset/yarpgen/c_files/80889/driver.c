#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1207871085;
unsigned int var_2 = 647534201U;
long long int var_4 = 5250274892379418595LL;
unsigned long long int var_5 = 14623369439261131108ULL;
int var_11 = 49341237;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-9928;
unsigned char var_14 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
