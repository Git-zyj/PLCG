#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47874;
unsigned int var_5 = 964865774U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 17194282754120224554ULL;
short var_12 = (short)-117;
unsigned int var_13 = 3947755871U;
unsigned int var_14 = 1012367521U;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
short var_19 = (short)25108;
signed char var_20 = (signed char)-105;
void init() {
}

void checksum() {
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
