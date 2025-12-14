#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43072;
unsigned long long int var_6 = 5691905942543263767ULL;
unsigned long long int var_10 = 10026602745476568971ULL;
unsigned long long int var_12 = 96720003826474354ULL;
unsigned long long int var_16 = 5647751545498571862ULL;
int zero = 0;
unsigned long long int var_17 = 17871614023132284421ULL;
unsigned short var_18 = (unsigned short)7249;
void init() {
}

void checksum() {
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
