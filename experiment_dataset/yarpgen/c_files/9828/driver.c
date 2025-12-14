#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -384723963;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_5 = -4997936179519071108LL;
long long int var_7 = 5600929698799491292LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7394078026289377512LL;
short var_11 = (short)-14974;
int zero = 0;
int var_12 = -1315565432;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
