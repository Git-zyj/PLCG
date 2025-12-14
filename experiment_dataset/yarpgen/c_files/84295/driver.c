#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15716748887267154047ULL;
long long int var_4 = 961425541548356798LL;
int zero = 0;
int var_16 = 1983589141;
unsigned long long int var_17 = 2952701915010225969ULL;
long long int var_18 = 8466153400697005183LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
