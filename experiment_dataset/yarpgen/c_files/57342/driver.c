#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3096863023080343073ULL;
long long int var_1 = 711930657879252253LL;
long long int var_3 = -684761872737793407LL;
long long int var_4 = -9097613554540706467LL;
unsigned int var_7 = 2592807819U;
int var_10 = -571927602;
int zero = 0;
unsigned int var_11 = 1921465351U;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
