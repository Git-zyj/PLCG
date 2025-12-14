#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13329636174379474323ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 483522065U;
short var_7 = (short)22496;
unsigned char var_10 = (unsigned char)93;
short var_13 = (short)4613;
int zero = 0;
int var_18 = 1923677553;
unsigned long long int var_19 = 4552268171273340352ULL;
unsigned int var_20 = 624123942U;
short var_21 = (short)-2835;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
