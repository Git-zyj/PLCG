#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)227;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)4;
short var_8 = (short)-1933;
short var_10 = (short)-6586;
long long int var_14 = 1652551904801109969LL;
int zero = 0;
unsigned short var_17 = (unsigned short)52312;
long long int var_18 = 2882718721521989655LL;
unsigned char var_19 = (unsigned char)187;
unsigned char var_20 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
