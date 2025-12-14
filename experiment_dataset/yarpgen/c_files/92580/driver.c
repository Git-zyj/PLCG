#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47559;
unsigned long long int var_5 = 3113597584064128609ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 1567229007652290433LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -3215453681531383836LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
