#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
unsigned int var_1 = 4164582868U;
long long int var_12 = 8240351099038553576LL;
long long int var_13 = 8575181911022912160LL;
int zero = 0;
unsigned long long int var_14 = 6795385467378676251ULL;
unsigned short var_15 = (unsigned short)54591;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
