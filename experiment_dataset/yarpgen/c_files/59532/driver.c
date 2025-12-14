#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3938;
int var_8 = -927789733;
long long int var_11 = -7429980310698274725LL;
unsigned long long int var_12 = 11473255159376249564ULL;
int var_14 = -1855279866;
unsigned short var_16 = (unsigned short)5615;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
unsigned char var_20 = (unsigned char)42;
signed char var_21 = (signed char)-30;
unsigned char var_22 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
