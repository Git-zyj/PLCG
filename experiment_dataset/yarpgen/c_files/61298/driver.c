#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 857669204U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_10 = 8045764185869077164ULL;
int zero = 0;
signed char var_11 = (signed char)-23;
long long int var_12 = 3219830094585333831LL;
signed char var_13 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
