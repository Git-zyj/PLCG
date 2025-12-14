#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
unsigned short var_11 = (unsigned short)14757;
unsigned long long int var_15 = 12460901004341803960ULL;
signed char var_17 = (signed char)126;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)124;
unsigned int var_21 = 997989633U;
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
