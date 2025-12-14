#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2052184329U;
unsigned char var_8 = (unsigned char)77;
unsigned int var_14 = 896673271U;
int zero = 0;
unsigned long long int var_18 = 15016172663472507328ULL;
short var_19 = (short)11438;
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
