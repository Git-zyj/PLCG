#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18961;
unsigned short var_12 = (unsigned short)56546;
unsigned int var_16 = 1942401619U;
short var_19 = (short)10963;
int zero = 0;
signed char var_20 = (signed char)30;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
