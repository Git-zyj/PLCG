#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1021374347008793312LL;
_Bool var_10 = (_Bool)0;
unsigned char var_17 = (unsigned char)76;
int zero = 0;
long long int var_19 = -8514653455503067789LL;
unsigned int var_20 = 1816419273U;
void init() {
}

void checksum() {
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
