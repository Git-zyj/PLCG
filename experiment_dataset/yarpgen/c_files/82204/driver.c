#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 209745514738761367ULL;
unsigned long long int var_2 = 13626159285451258131ULL;
long long int var_5 = 3336958092438593754LL;
int var_9 = 2119814612;
long long int var_10 = 164232499555467648LL;
unsigned long long int var_11 = 7568743160115229304ULL;
int zero = 0;
int var_12 = 563142590;
short var_13 = (short)-30416;
int var_14 = 1219269518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
