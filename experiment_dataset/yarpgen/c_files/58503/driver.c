#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
unsigned int var_3 = 3280311604U;
long long int var_5 = -6290793912211933305LL;
short var_9 = (short)30993;
unsigned char var_10 = (unsigned char)0;
int var_13 = 1993898438;
int var_14 = -1965406963;
int zero = 0;
signed char var_16 = (signed char)-27;
short var_17 = (short)3939;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
