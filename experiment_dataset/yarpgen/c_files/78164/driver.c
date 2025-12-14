#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18684;
int var_4 = 1041380641;
short var_5 = (short)-3240;
short var_6 = (short)-20231;
long long int var_9 = 3466381830538127914LL;
int zero = 0;
signed char var_14 = (signed char)-102;
unsigned long long int var_15 = 9747965687783126221ULL;
long long int var_16 = 9203335312789309286LL;
void init() {
}

void checksum() {
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
