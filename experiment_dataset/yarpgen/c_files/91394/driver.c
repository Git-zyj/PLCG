#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
unsigned char var_1 = (unsigned char)212;
int var_3 = -850979166;
unsigned char var_6 = (unsigned char)99;
unsigned int var_7 = 1480386875U;
int var_10 = -583710480;
unsigned char var_11 = (unsigned char)213;
unsigned short var_12 = (unsigned short)9708;
int zero = 0;
long long int var_13 = -6010783049157546072LL;
signed char var_14 = (signed char)-77;
unsigned char var_15 = (unsigned char)187;
unsigned short var_16 = (unsigned short)39234;
unsigned short var_17 = (unsigned short)40767;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
