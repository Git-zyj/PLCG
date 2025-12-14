#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7996938051644997673LL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-737;
unsigned short var_8 = (unsigned short)43113;
unsigned int var_13 = 281879231U;
unsigned short var_14 = (unsigned short)42090;
int zero = 0;
signed char var_18 = (signed char)-9;
int var_19 = 342006355;
void init() {
}

void checksum() {
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
