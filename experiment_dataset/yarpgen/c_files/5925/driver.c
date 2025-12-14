#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1521801158;
_Bool var_5 = (_Bool)1;
int var_7 = -1044911302;
signed char var_11 = (signed char)-12;
int zero = 0;
unsigned int var_17 = 2006403977U;
unsigned int var_18 = 1053590455U;
unsigned int var_19 = 1718428655U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
