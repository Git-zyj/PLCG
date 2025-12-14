#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48228;
short var_5 = (short)14730;
signed char var_6 = (signed char)27;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-11327;
unsigned long long int var_14 = 6721974493147377847ULL;
void init() {
}

void checksum() {
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
