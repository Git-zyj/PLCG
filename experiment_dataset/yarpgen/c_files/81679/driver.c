#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1276623857;
unsigned int var_11 = 1291916900U;
unsigned long long int var_13 = 1431325298277271028ULL;
short var_15 = (short)-32648;
long long int var_16 = -3785125925585361844LL;
int zero = 0;
int var_20 = -1238382847;
unsigned short var_21 = (unsigned short)3983;
int var_22 = 481294415;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
