#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 18292472713637148163ULL;
unsigned long long int var_8 = 14350416258479638401ULL;
unsigned long long int var_11 = 2121906350637937575ULL;
int zero = 0;
unsigned long long int var_13 = 10507534137086289027ULL;
int var_14 = -327449514;
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
