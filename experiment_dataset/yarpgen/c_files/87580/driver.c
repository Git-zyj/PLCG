#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5444;
unsigned int var_2 = 764151120U;
_Bool var_5 = (_Bool)0;
long long int var_7 = -1927942862285030931LL;
short var_13 = (short)-10413;
unsigned char var_14 = (unsigned char)43;
unsigned char var_15 = (unsigned char)21;
short var_17 = (short)22360;
int zero = 0;
unsigned int var_19 = 1059540543U;
_Bool var_20 = (_Bool)1;
int var_21 = 820903693;
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
