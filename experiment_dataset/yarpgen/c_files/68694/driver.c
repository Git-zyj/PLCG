#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
unsigned int var_5 = 2908744980U;
long long int var_7 = -1512128140039848321LL;
int var_8 = 341540223;
short var_9 = (short)-18246;
int zero = 0;
unsigned long long int var_10 = 13096108352321867637ULL;
short var_11 = (short)-6157;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
