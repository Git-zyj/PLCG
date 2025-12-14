#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 2260229816711450094LL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-13964;
int zero = 0;
unsigned short var_12 = (unsigned short)29088;
unsigned long long int var_13 = 13771362976913840907ULL;
signed char var_14 = (signed char)-10;
unsigned long long int var_15 = 2668021821573623999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
