#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
unsigned int var_4 = 1634478502U;
long long int var_5 = -768351982933613037LL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)76;
unsigned int var_11 = 2296568730U;
short var_16 = (short)-30182;
int zero = 0;
signed char var_18 = (signed char)31;
unsigned int var_19 = 3376194872U;
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
