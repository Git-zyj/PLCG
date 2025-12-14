#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2134572794U;
unsigned long long int var_3 = 8840455636727882191ULL;
unsigned long long int var_8 = 8223414124211508337ULL;
short var_9 = (short)-31999;
short var_10 = (short)-13768;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 954890417;
void init() {
}

void checksum() {
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
