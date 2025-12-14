#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2076384239;
unsigned char var_6 = (unsigned char)136;
short var_11 = (short)-21434;
unsigned int var_15 = 1995819862U;
int zero = 0;
unsigned long long int var_18 = 9761727691699810863ULL;
long long int var_19 = -828199968858427116LL;
short var_20 = (short)16894;
long long int var_21 = 2505601732263422311LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
