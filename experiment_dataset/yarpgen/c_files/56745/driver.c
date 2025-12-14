#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 494485583599249341LL;
short var_3 = (short)-7609;
unsigned short var_5 = (unsigned short)32764;
long long int var_7 = -522727122662835625LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_19 = 8458986567342038744LL;
unsigned long long int var_20 = 11664766418491164604ULL;
unsigned short var_21 = (unsigned short)41697;
void init() {
}

void checksum() {
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
