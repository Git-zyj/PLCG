#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5113071464761500042LL;
long long int var_5 = -4217930397991693165LL;
unsigned char var_7 = (unsigned char)11;
short var_13 = (short)32183;
unsigned int var_15 = 876214779U;
int zero = 0;
unsigned int var_20 = 26435936U;
short var_21 = (short)-22236;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
