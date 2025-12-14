#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
long long int var_4 = 7269840855003394873LL;
unsigned int var_5 = 2239081058U;
unsigned int var_9 = 628457937U;
int zero = 0;
short var_11 = (short)-28813;
int var_12 = 1899522583;
long long int var_13 = -4056795827614934922LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
