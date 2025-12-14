#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3921718398U;
unsigned int var_1 = 3728312755U;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6538484304009591450LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 8126141385101138255ULL;
int var_10 = -253809037;
long long int var_11 = -8161095976612737745LL;
unsigned long long int var_12 = 3259138530404297681ULL;
int zero = 0;
unsigned int var_13 = 1009036758U;
unsigned long long int var_14 = 58847662699985690ULL;
unsigned int var_15 = 94246647U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
