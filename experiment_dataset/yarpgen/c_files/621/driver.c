#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5303688233015490116LL;
unsigned long long int var_6 = 17956100197909947841ULL;
short var_9 = (short)24803;
signed char var_10 = (signed char)-42;
int zero = 0;
unsigned char var_17 = (unsigned char)27;
unsigned int var_18 = 544135244U;
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
