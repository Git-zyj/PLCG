#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5642455524868523975LL;
unsigned char var_4 = (unsigned char)175;
short var_9 = (short)32520;
short var_10 = (short)-14534;
int var_13 = 112016375;
unsigned char var_16 = (unsigned char)136;
int zero = 0;
short var_18 = (short)-22574;
short var_19 = (short)-2271;
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
