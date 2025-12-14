#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1615802238320728261ULL;
unsigned long long int var_11 = 8120528422976074338ULL;
int zero = 0;
int var_15 = -2012471418;
unsigned char var_16 = (unsigned char)47;
long long int var_17 = 7199504406126181668LL;
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
