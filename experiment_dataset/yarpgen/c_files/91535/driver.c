#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_7 = 1423820767;
unsigned long long int var_10 = 15447523495279042114ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)50197;
unsigned int var_19 = 1822471652U;
unsigned char var_20 = (unsigned char)151;
unsigned char var_21 = (unsigned char)100;
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
