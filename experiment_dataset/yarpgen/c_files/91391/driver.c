#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3958147224U;
unsigned long long int var_8 = 14838075485350487858ULL;
_Bool var_10 = (_Bool)1;
long long int var_16 = 7569695663127332170LL;
int zero = 0;
int var_18 = -1203453347;
unsigned short var_19 = (unsigned short)32080;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)188;
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
