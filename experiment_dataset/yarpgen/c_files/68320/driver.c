#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11904510095265296802ULL;
short var_5 = (short)-27535;
unsigned long long int var_7 = 2799238422247426966ULL;
long long int var_9 = 4947454914014228352LL;
int zero = 0;
unsigned short var_13 = (unsigned short)4440;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
