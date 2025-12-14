#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 796003731U;
long long int var_3 = -7336784575688914675LL;
unsigned long long int var_5 = 2523526853061095690ULL;
_Bool var_6 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_14 = -1127314706;
int zero = 0;
unsigned short var_17 = (unsigned short)32770;
_Bool var_18 = (_Bool)0;
int var_19 = 658135507;
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
