#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57116;
int var_9 = -1488130232;
unsigned long long int var_10 = 13540444302971079381ULL;
int zero = 0;
unsigned int var_12 = 3451799322U;
long long int var_13 = 5822815893999067415LL;
unsigned short var_14 = (unsigned short)8605;
unsigned short var_15 = (unsigned short)43204;
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
