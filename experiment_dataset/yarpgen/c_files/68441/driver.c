#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8343995113465575940LL;
short var_5 = (short)22717;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_15 = (short)-20969;
int zero = 0;
int var_17 = -856501572;
unsigned int var_18 = 3962741732U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
