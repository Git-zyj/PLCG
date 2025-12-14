#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16133643130591413077ULL;
_Bool var_4 = (_Bool)1;
int var_10 = -1023074759;
signed char var_11 = (signed char)-74;
unsigned long long int var_13 = 7394419012251913554ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2628617633U;
int var_20 = 1362835719;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
