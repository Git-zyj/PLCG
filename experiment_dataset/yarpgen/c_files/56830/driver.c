#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -170099679;
long long int var_9 = 2543871774216174957LL;
unsigned long long int var_10 = 10235031662524758661ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)16;
int var_13 = 1185620231;
short var_14 = (short)2582;
long long int var_15 = -4799215312296325341LL;
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
