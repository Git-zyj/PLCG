#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8100896059892332615LL;
signed char var_2 = (signed char)62;
int var_8 = -564544303;
unsigned long long int var_9 = 12451017804981827978ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-20;
unsigned char var_15 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
