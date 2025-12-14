#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6994844013825356060ULL;
unsigned short var_3 = (unsigned short)39766;
short var_4 = (short)13387;
unsigned long long int var_5 = 3562579896519485194ULL;
long long int var_6 = 9002307350054970873LL;
signed char var_9 = (signed char)115;
int zero = 0;
unsigned int var_10 = 1876711960U;
short var_11 = (short)13312;
short var_12 = (short)-28025;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
