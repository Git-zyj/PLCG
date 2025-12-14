#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 1293867866501370243ULL;
int var_5 = 1957508090;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_13 = 1790196711;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1695216002;
int var_22 = -1833444892;
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
