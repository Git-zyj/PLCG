#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -441135269;
unsigned int var_5 = 501019209U;
long long int var_7 = -8303493256442090594LL;
signed char var_8 = (signed char)-99;
unsigned char var_9 = (unsigned char)201;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-1918;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 7438591118374043781LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
