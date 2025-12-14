#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6488129516393912050LL;
long long int var_17 = -2939587151516535371LL;
signed char var_18 = (signed char)-74;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned char var_20 = (unsigned char)173;
void init() {
}

void checksum() {
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
