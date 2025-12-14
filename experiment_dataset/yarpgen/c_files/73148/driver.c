#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2564148392024350178ULL;
signed char var_1 = (signed char)39;
_Bool var_2 = (_Bool)1;
int var_3 = -1061128825;
_Bool var_5 = (_Bool)1;
int var_6 = 489291363;
signed char var_7 = (signed char)-76;
unsigned short var_10 = (unsigned short)46137;
int zero = 0;
unsigned short var_11 = (unsigned short)26848;
unsigned long long int var_12 = 12515550496966610085ULL;
unsigned short var_13 = (unsigned short)42196;
int var_14 = -1065657135;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
