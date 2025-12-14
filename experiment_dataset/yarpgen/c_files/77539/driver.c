#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1964766260;
signed char var_7 = (signed char)82;
unsigned short var_8 = (unsigned short)28178;
unsigned short var_10 = (unsigned short)11397;
int zero = 0;
unsigned short var_17 = (unsigned short)14767;
unsigned int var_18 = 393677303U;
unsigned short var_19 = (unsigned short)1385;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
