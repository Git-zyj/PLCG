#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18143;
unsigned short var_4 = (unsigned short)34401;
unsigned char var_6 = (unsigned char)77;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 547117966U;
long long int var_9 = -7210768432780520677LL;
int zero = 0;
unsigned short var_16 = (unsigned short)26906;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
