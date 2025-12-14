#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned long long int var_2 = 2767792710104110696ULL;
long long int var_3 = 29353633532097339LL;
long long int var_4 = 7922422289993464175LL;
unsigned char var_5 = (unsigned char)208;
long long int var_6 = 1425958188804339276LL;
long long int var_7 = -7847787777689290434LL;
unsigned int var_9 = 1980436588U;
unsigned int var_12 = 4032799776U;
int zero = 0;
unsigned char var_15 = (unsigned char)197;
unsigned long long int var_16 = 12500649104580011746ULL;
unsigned int var_17 = 1228794698U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
