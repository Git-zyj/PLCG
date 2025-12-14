#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1183826598582886914LL;
long long int var_7 = 2398084939206863552LL;
unsigned char var_10 = (unsigned char)152;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1268308124U;
unsigned long long int var_22 = 12289056117881219360ULL;
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
