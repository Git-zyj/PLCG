#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21254;
unsigned long long int var_4 = 14000054054699992076ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = -1249916879229109758LL;
int zero = 0;
signed char var_19 = (signed char)34;
signed char var_20 = (signed char)6;
signed char var_21 = (signed char)52;
short var_22 = (short)5394;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
