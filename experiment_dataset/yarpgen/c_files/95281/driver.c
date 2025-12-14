#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31676;
short var_3 = (short)-7379;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)154;
long long int var_6 = 8171998281102456223LL;
long long int var_12 = -9080395818236557311LL;
int zero = 0;
int var_13 = 176373177;
int var_14 = 64425825;
unsigned int var_15 = 1638338092U;
unsigned short var_16 = (unsigned short)30854;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
