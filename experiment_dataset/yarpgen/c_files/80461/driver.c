#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
long long int var_1 = 318919943915759571LL;
unsigned int var_2 = 4044042572U;
signed char var_3 = (signed char)-31;
long long int var_4 = -7701074579057524142LL;
unsigned long long int var_8 = 14551206658892156328ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1698897904;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
