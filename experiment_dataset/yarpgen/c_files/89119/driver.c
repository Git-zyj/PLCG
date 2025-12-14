#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14978658549762360036ULL;
unsigned short var_7 = (unsigned short)13867;
unsigned char var_12 = (unsigned char)218;
short var_13 = (short)-11748;
_Bool var_17 = (_Bool)1;
long long int var_18 = 4418836637770341094LL;
int zero = 0;
long long int var_19 = 2431482836429207403LL;
signed char var_20 = (signed char)126;
unsigned short var_21 = (unsigned short)21720;
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
