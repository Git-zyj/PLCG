#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12462;
int var_1 = 999808273;
long long int var_6 = -2489466734996835232LL;
long long int var_10 = 5424188047506582819LL;
unsigned int var_12 = 3314734622U;
int zero = 0;
unsigned short var_15 = (unsigned short)37122;
unsigned int var_16 = 463506463U;
long long int var_17 = -7094209722742901796LL;
short var_18 = (short)9383;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
