#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 3860411119638697746ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)3;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2439161983U;
int var_19 = -1519325889;
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
