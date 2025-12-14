#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 243949320;
long long int var_6 = 5268557811470221171LL;
unsigned int var_9 = 152627906U;
unsigned char var_11 = (unsigned char)105;
short var_15 = (short)13376;
int var_16 = 1477217289;
int zero = 0;
int var_19 = -1449420654;
unsigned int var_20 = 704981732U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
