#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1340501428750208146LL;
unsigned long long int var_3 = 13284754686529809876ULL;
long long int var_5 = -1268229989515395947LL;
long long int var_6 = -1416510340796996900LL;
int var_8 = -2120018677;
unsigned int var_9 = 574715170U;
int zero = 0;
unsigned short var_10 = (unsigned short)45406;
unsigned long long int var_11 = 13292787055641047403ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
