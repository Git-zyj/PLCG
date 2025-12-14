#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5462185272102483547LL;
long long int var_5 = -1892619108761400421LL;
long long int var_8 = 1698257106239786901LL;
long long int var_9 = 9015611451253454574LL;
long long int var_10 = 5774950151811072450LL;
long long int var_12 = 2283161103373781020LL;
long long int var_13 = -7635357467699835236LL;
int zero = 0;
long long int var_15 = 7283636560378176293LL;
long long int var_16 = -866169846382508838LL;
long long int var_17 = -601977502442605654LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
