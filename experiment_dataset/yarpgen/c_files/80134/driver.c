#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63886;
long long int var_4 = 8794441626321205419LL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1908870524U;
signed char var_8 = (signed char)118;
int zero = 0;
unsigned long long int var_11 = 2476798708518702216ULL;
unsigned short var_12 = (unsigned short)32952;
_Bool var_13 = (_Bool)0;
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
