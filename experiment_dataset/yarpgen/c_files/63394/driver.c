#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1427785776U;
unsigned short var_1 = (unsigned short)47574;
_Bool var_2 = (_Bool)0;
long long int var_4 = 9094432719762122203LL;
unsigned long long int var_5 = 5755877658243808411ULL;
unsigned char var_7 = (unsigned char)4;
unsigned int var_8 = 3184792695U;
signed char var_11 = (signed char)50;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 268282699U;
unsigned long long int var_16 = 5779584867746407949ULL;
unsigned char var_17 = (unsigned char)147;
signed char var_18 = (signed char)106;
unsigned short var_19 = (unsigned short)1374;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
