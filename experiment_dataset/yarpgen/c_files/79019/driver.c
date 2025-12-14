#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3409;
unsigned char var_1 = (unsigned char)147;
unsigned long long int var_2 = 6772160124359708613ULL;
short var_5 = (short)4720;
unsigned int var_8 = 2236589375U;
unsigned short var_9 = (unsigned short)28259;
int zero = 0;
long long int var_12 = -3616792300411568969LL;
unsigned int var_13 = 2210251255U;
unsigned long long int var_14 = 2297276659016821085ULL;
long long int var_15 = 4400704748778562921LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
