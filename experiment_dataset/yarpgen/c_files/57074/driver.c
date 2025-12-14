#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)163;
signed char var_4 = (signed char)-64;
signed char var_6 = (signed char)-125;
long long int var_9 = 911572339253783841LL;
short var_10 = (short)2356;
int zero = 0;
unsigned long long int var_11 = 10553220196385546907ULL;
signed char var_12 = (signed char)-55;
unsigned int var_13 = 771077197U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
