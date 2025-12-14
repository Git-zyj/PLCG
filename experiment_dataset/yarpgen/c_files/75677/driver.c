#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9;
long long int var_2 = 8157139332156383917LL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)16331;
unsigned int var_5 = 4187204296U;
int var_6 = -845377562;
int zero = 0;
signed char var_18 = (signed char)37;
short var_19 = (short)-2279;
_Bool var_20 = (_Bool)0;
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
