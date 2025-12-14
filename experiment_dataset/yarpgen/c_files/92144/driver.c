#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1459039917;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2332242869U;
signed char var_5 = (signed char)-38;
long long int var_14 = 4134693136732086684LL;
long long int var_17 = -8717651683216173026LL;
int zero = 0;
int var_18 = -1792578940;
unsigned char var_19 = (unsigned char)247;
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
