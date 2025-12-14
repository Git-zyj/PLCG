#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -788312861343280807LL;
unsigned short var_10 = (unsigned short)44207;
long long int var_11 = -6487996170086846915LL;
unsigned short var_15 = (unsigned short)52189;
long long int var_17 = -6179806324226403510LL;
short var_18 = (short)-14347;
int zero = 0;
long long int var_19 = 50472341008030667LL;
unsigned short var_20 = (unsigned short)51708;
signed char var_21 = (signed char)-22;
unsigned short var_22 = (unsigned short)44474;
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
