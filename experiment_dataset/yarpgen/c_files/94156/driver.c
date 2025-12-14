#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4109213643850493717LL;
signed char var_5 = (signed char)63;
short var_9 = (short)24594;
int zero = 0;
unsigned long long int var_13 = 15502628825079664486ULL;
short var_14 = (short)5721;
unsigned long long int var_15 = 10039575629862734288ULL;
void init() {
}

void checksum() {
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
