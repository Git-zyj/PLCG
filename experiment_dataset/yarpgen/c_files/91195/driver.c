#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
unsigned short var_1 = (unsigned short)27546;
_Bool var_3 = (_Bool)0;
int var_4 = -1881698998;
unsigned long long int var_5 = 10993597175959659718ULL;
int var_8 = -1474082771;
long long int var_10 = 1031536126497216890LL;
int zero = 0;
int var_17 = -972507567;
unsigned long long int var_18 = 4371490675279697249ULL;
unsigned long long int var_19 = 1414259223348962352ULL;
unsigned long long int var_20 = 2048065615441055950ULL;
long long int var_21 = -1018140320882148982LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
