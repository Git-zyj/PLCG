#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30083;
short var_5 = (short)-26822;
signed char var_7 = (signed char)78;
unsigned char var_8 = (unsigned char)240;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-17041;
long long int var_21 = -7571680613192875774LL;
short var_22 = (short)341;
short var_23 = (short)-16486;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
