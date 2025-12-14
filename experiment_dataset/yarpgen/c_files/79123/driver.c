#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18099335762690670663ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 13321067202871194873ULL;
unsigned long long int var_6 = 560535246959203284ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1967167852;
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
