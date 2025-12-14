#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned char var_1 = (unsigned char)221;
unsigned long long int var_2 = 16940740241514325914ULL;
int var_3 = -236062757;
long long int var_7 = -9040936589562440449LL;
signed char var_12 = (signed char)-70;
short var_13 = (short)-32495;
long long int var_16 = 6727901114974102918LL;
int zero = 0;
signed char var_18 = (signed char)113;
long long int var_19 = 5639921044507065059LL;
short var_20 = (short)-28251;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
