#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
long long int var_10 = 7529126842771301930LL;
long long int var_12 = 9004108268772161923LL;
long long int var_16 = 862001016493616162LL;
unsigned short var_17 = (unsigned short)52752;
int zero = 0;
signed char var_18 = (signed char)-76;
unsigned char var_19 = (unsigned char)205;
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
