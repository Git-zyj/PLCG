#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5207962040900849333LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5279461864439029885LL;
unsigned long long int var_9 = 815249587318531207ULL;
int zero = 0;
short var_12 = (short)-21720;
unsigned long long int var_13 = 10119628188140434587ULL;
long long int var_14 = 48466973051642753LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
