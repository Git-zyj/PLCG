#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4706747652700369919ULL;
unsigned long long int var_1 = 7939016573005588307ULL;
int var_5 = -1811449387;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)113;
unsigned int var_15 = 3987228451U;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)90;
unsigned char var_21 = (unsigned char)92;
signed char var_22 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
