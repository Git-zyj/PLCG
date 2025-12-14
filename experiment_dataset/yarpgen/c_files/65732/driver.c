#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11256;
long long int var_6 = 6774555646237421277LL;
unsigned short var_13 = (unsigned short)35576;
int zero = 0;
long long int var_18 = 4835606481215303066LL;
unsigned short var_19 = (unsigned short)59152;
unsigned short var_20 = (unsigned short)36675;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
