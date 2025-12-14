#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29060;
signed char var_8 = (signed char)-50;
long long int var_10 = -4252939218666120071LL;
unsigned int var_11 = 2830640451U;
int zero = 0;
int var_15 = -1616612159;
unsigned char var_16 = (unsigned char)175;
unsigned int var_17 = 1622869978U;
unsigned long long int var_18 = 3696571573539022360ULL;
unsigned int var_19 = 3489102837U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
