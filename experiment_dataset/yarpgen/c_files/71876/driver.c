#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36123;
unsigned short var_3 = (unsigned short)54185;
long long int var_5 = 724966067394369469LL;
unsigned short var_7 = (unsigned short)29190;
long long int var_8 = -4588382893532563199LL;
long long int var_11 = -1989785290006668535LL;
long long int var_12 = -3156193177959068205LL;
unsigned long long int var_15 = 13525933765291093529ULL;
long long int var_16 = 2510374954342025294LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 7733516454107956281ULL;
unsigned long long int var_19 = 5904277568905060923ULL;
unsigned long long int var_20 = 16157869194010702192ULL;
short var_21 = (short)6750;
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
