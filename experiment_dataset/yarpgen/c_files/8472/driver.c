#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43259;
_Bool var_4 = (_Bool)0;
signed char var_10 = (signed char)126;
int zero = 0;
long long int var_11 = 8365849008768011723LL;
unsigned short var_12 = (unsigned short)13738;
unsigned int var_13 = 2211161955U;
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
