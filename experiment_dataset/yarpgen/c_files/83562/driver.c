#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)117;
int var_9 = -1202444762;
signed char var_11 = (signed char)-50;
signed char var_12 = (signed char)-21;
int zero = 0;
signed char var_19 = (signed char)71;
unsigned long long int var_20 = 5376304886002188268ULL;
unsigned long long int var_21 = 5889375353455200769ULL;
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
