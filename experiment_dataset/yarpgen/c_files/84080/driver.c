#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22828;
unsigned long long int var_1 = 9393218396052113160ULL;
signed char var_3 = (signed char)111;
unsigned short var_9 = (unsigned short)55906;
int zero = 0;
unsigned short var_18 = (unsigned short)46840;
long long int var_19 = 6383690992228693851LL;
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
