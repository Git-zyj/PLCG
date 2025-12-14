#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)11406;
long long int var_8 = 5016744860284405944LL;
unsigned char var_10 = (unsigned char)37;
int var_15 = -522911091;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_20 = 1195713352;
signed char var_21 = (signed char)42;
long long int var_22 = -5293359876469801896LL;
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
