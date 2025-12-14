#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1114988154;
long long int var_9 = 5712018031675829529LL;
signed char var_10 = (signed char)47;
long long int var_16 = -5330011856563864352LL;
int zero = 0;
unsigned char var_18 = (unsigned char)221;
unsigned char var_19 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
