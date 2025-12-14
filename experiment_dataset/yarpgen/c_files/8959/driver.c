#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8504080286761924804LL;
unsigned char var_4 = (unsigned char)153;
unsigned int var_11 = 4220764552U;
unsigned char var_14 = (unsigned char)96;
int zero = 0;
long long int var_18 = 1916817168351760473LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
