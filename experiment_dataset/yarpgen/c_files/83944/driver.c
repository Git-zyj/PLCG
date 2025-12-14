#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)7;
unsigned char var_10 = (unsigned char)60;
long long int var_12 = -7861632017320129885LL;
int zero = 0;
unsigned short var_18 = (unsigned short)45116;
unsigned short var_19 = (unsigned short)53895;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
