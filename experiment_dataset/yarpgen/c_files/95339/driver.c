#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-14;
signed char var_11 = (signed char)35;
unsigned int var_14 = 418829942U;
int zero = 0;
short var_19 = (short)-2473;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 480664849U;
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
