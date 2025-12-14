#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43406;
long long int var_4 = 724445763367577374LL;
unsigned int var_6 = 2377098107U;
short var_7 = (short)-6445;
unsigned short var_8 = (unsigned short)35279;
short var_9 = (short)6983;
int var_10 = -664537389;
unsigned long long int var_12 = 7562599910458174142ULL;
int zero = 0;
int var_13 = -395413354;
long long int var_14 = -5380596087481689007LL;
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
