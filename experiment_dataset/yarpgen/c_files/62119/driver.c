#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -535949590;
long long int var_1 = -3636487750181018697LL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-23702;
unsigned int var_9 = 2761520127U;
int zero = 0;
unsigned int var_12 = 2817606763U;
unsigned long long int var_13 = 12500962921880350832ULL;
int var_14 = 1405565834;
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
