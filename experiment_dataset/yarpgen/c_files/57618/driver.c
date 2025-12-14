#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_11 = 8391033398204900144ULL;
unsigned long long int var_14 = 16165204874828469426ULL;
int zero = 0;
unsigned long long int var_20 = 1615521679197668112ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15878533028430265565ULL;
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
