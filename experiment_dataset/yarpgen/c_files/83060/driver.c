#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
short var_8 = (short)19481;
long long int var_9 = -2751662342318463721LL;
int var_11 = -1176035448;
unsigned long long int var_13 = 17097802155182856333ULL;
int var_17 = 820513989;
int zero = 0;
unsigned char var_18 = (unsigned char)101;
long long int var_19 = 4381520430421079347LL;
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
