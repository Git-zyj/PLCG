#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)17;
signed char var_6 = (signed char)-12;
unsigned char var_7 = (unsigned char)73;
unsigned char var_11 = (unsigned char)123;
int zero = 0;
long long int var_17 = -3825295693571148987LL;
long long int var_18 = 4951614868208798707LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
