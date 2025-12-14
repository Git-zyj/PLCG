#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2112308245U;
short var_1 = (short)-26329;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)39014;
_Bool var_5 = (_Bool)1;
long long int var_8 = -3531006917733115950LL;
int zero = 0;
short var_11 = (short)-13166;
int var_12 = 1693881106;
signed char var_13 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
