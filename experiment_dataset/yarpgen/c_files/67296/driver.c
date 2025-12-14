#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)28696;
long long int var_8 = -4585409258092530275LL;
signed char var_9 = (signed char)3;
int zero = 0;
int var_13 = 966463768;
unsigned char var_14 = (unsigned char)63;
void init() {
}

void checksum() {
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
