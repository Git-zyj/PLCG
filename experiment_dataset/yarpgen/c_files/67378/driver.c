#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12554434075657628274ULL;
long long int var_5 = -1390852036564046816LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 15846655075411643092ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)52660;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
