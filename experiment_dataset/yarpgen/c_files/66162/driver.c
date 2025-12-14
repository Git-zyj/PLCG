#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36865;
signed char var_6 = (signed char)10;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)34792;
signed char var_14 = (signed char)-105;
unsigned short var_15 = (unsigned short)9893;
void init() {
}

void checksum() {
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
