#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -9179511814750936264LL;
unsigned long long int var_10 = 1779474379906533970ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 2957475880U;
int zero = 0;
int var_17 = 1166850014;
unsigned long long int var_18 = 15971369956006754306ULL;
unsigned short var_19 = (unsigned short)5907;
unsigned short var_20 = (unsigned short)11611;
void init() {
}

void checksum() {
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
