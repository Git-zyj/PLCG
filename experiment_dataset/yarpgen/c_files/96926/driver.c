#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29196;
long long int var_1 = 5163418301341942167LL;
unsigned long long int var_5 = 10169901774621618182ULL;
int var_6 = 1265659471;
unsigned short var_7 = (unsigned short)51185;
unsigned short var_9 = (unsigned short)15820;
int zero = 0;
unsigned short var_14 = (unsigned short)57333;
unsigned short var_15 = (unsigned short)780;
unsigned int var_16 = 1151514854U;
unsigned int var_17 = 1069513684U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
