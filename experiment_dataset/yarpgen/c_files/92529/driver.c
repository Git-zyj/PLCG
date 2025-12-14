#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)9306;
signed char var_8 = (signed char)-127;
long long int var_9 = 4622194091625835659LL;
int zero = 0;
unsigned char var_16 = (unsigned char)85;
unsigned char var_17 = (unsigned char)87;
signed char var_18 = (signed char)-91;
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
