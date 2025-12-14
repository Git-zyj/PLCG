#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17337751385430838261ULL;
int var_5 = -1006794154;
_Bool var_6 = (_Bool)0;
long long int var_9 = 487932182504747835LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)25;
short var_12 = (short)12864;
unsigned int var_13 = 3300297200U;
unsigned char var_14 = (unsigned char)194;
short var_15 = (short)20051;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
