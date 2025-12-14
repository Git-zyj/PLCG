#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 12888736756748472575ULL;
int zero = 0;
int var_17 = -1209945351;
unsigned long long int var_18 = 10815223080618860933ULL;
unsigned int var_19 = 3109166578U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
