#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3033218345U;
int var_1 = 1743687731;
unsigned long long int var_4 = 2830414520664219490ULL;
unsigned int var_5 = 55597637U;
unsigned char var_8 = (unsigned char)222;
unsigned int var_10 = 1806642857U;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-77;
int var_13 = 874019233;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
