#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18188;
int var_1 = 1518152677;
unsigned short var_3 = (unsigned short)1442;
signed char var_4 = (signed char)-44;
unsigned short var_5 = (unsigned short)12465;
unsigned int var_10 = 1733866590U;
short var_12 = (short)15961;
signed char var_16 = (signed char)-73;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
