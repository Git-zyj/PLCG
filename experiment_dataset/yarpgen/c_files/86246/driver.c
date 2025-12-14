#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_6 = 4277359759966961164ULL;
int var_11 = -1678032364;
unsigned long long int var_14 = 11662218395865793694ULL;
int zero = 0;
unsigned long long int var_17 = 8931259089702416301ULL;
unsigned long long int var_18 = 1473541552512615334ULL;
short var_19 = (short)3393;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
