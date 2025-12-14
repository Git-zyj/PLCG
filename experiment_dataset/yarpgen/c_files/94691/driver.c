#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1576377454U;
unsigned int var_9 = 4164361080U;
signed char var_10 = (signed char)-114;
long long int var_14 = -2373592063056621228LL;
unsigned long long int var_15 = 5614589646250117031ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
