#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 802810496301866617LL;
unsigned char var_6 = (unsigned char)218;
unsigned long long int var_12 = 216349404557152925ULL;
unsigned char var_16 = (unsigned char)242;
short var_17 = (short)30543;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
long long int var_19 = -3333155022159214096LL;
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
