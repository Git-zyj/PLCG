#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9126555912038892546ULL;
unsigned long long int var_2 = 5330188431799283421ULL;
signed char var_5 = (signed char)13;
long long int var_7 = 4412568290240973803LL;
unsigned short var_8 = (unsigned short)2032;
int zero = 0;
signed char var_12 = (signed char)93;
short var_13 = (short)30040;
unsigned long long int var_14 = 9484183659505813351ULL;
unsigned long long int var_15 = 13672060908975127495ULL;
short var_16 = (short)983;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
