#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
unsigned long long int var_4 = 15244807724746329517ULL;
long long int var_8 = 1631371547623966375LL;
signed char var_11 = (signed char)114;
signed char var_13 = (signed char)-51;
int zero = 0;
signed char var_14 = (signed char)29;
signed char var_15 = (signed char)6;
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
