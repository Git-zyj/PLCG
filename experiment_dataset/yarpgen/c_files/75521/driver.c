#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1428045089U;
signed char var_7 = (signed char)-42;
unsigned short var_9 = (unsigned short)20516;
int var_10 = -1853837927;
long long int var_12 = -4753359070762849911LL;
int var_13 = 174277112;
unsigned int var_15 = 3862693514U;
int zero = 0;
int var_16 = 1420304217;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)48187;
int var_19 = 1311193776;
int var_20 = 66974470;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
