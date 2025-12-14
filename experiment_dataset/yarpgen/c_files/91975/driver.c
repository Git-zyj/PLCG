#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3091442542509727645ULL;
unsigned char var_4 = (unsigned char)153;
unsigned char var_5 = (unsigned char)122;
unsigned int var_7 = 2105033521U;
unsigned char var_8 = (unsigned char)77;
_Bool var_10 = (_Bool)1;
int var_11 = -679948243;
int zero = 0;
long long int var_12 = 4954063903514400156LL;
short var_13 = (short)-5955;
signed char var_14 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
