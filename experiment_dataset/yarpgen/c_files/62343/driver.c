#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -366537286;
long long int var_1 = 4484122434064538147LL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = 7546883441696240344LL;
signed char var_8 = (signed char)26;
unsigned short var_10 = (unsigned short)50927;
int zero = 0;
signed char var_12 = (signed char)-78;
signed char var_13 = (signed char)-42;
signed char var_14 = (signed char)76;
long long int var_15 = 6075516055502543602LL;
void init() {
}

void checksum() {
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
