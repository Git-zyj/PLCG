#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned short var_1 = (unsigned short)33003;
signed char var_2 = (signed char)-85;
long long int var_6 = 5001923341635560601LL;
int var_7 = 850858329;
signed char var_11 = (signed char)50;
int var_12 = 1903846266;
unsigned long long int var_14 = 5295425219944015290ULL;
int zero = 0;
int var_15 = -861436798;
unsigned int var_16 = 1990302979U;
int var_17 = 1878918266;
signed char var_18 = (signed char)-30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
