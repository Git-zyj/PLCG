#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 245957869;
unsigned char var_4 = (unsigned char)54;
unsigned char var_7 = (unsigned char)162;
int zero = 0;
int var_16 = -917628900;
signed char var_17 = (signed char)108;
long long int var_18 = -6653271343651722062LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
