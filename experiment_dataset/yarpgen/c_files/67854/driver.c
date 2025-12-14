#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)24411;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)94;
unsigned long long int var_12 = 9735541440634625532ULL;
unsigned char var_15 = (unsigned char)218;
unsigned short var_16 = (unsigned short)46301;
int zero = 0;
unsigned int var_19 = 875400490U;
long long int var_20 = -6829983139391828953LL;
_Bool var_21 = (_Bool)0;
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
