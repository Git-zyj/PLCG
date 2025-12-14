#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2855455663U;
short var_4 = (short)-31898;
long long int var_9 = 6795650128607092722LL;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 3287653069U;
unsigned int var_16 = 2611667269U;
int zero = 0;
long long int var_19 = -6517121056768435756LL;
long long int var_20 = -1143268100541836841LL;
void init() {
}

void checksum() {
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
