#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
long long int var_2 = 5674324974392342971LL;
unsigned char var_16 = (unsigned char)96;
short var_18 = (short)-18215;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)27143;
unsigned int var_22 = 3667756196U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
