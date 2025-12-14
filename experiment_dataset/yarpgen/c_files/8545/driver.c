#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-28;
unsigned int var_8 = 3953478616U;
unsigned int var_9 = 3093836990U;
int zero = 0;
int var_10 = 1198826500;
long long int var_11 = -6462913563090428877LL;
unsigned long long int var_12 = 6385366765155989235ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
