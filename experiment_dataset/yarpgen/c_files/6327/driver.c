#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 253420660U;
short var_1 = (short)19151;
unsigned char var_3 = (unsigned char)232;
unsigned int var_4 = 3869789912U;
long long int var_8 = 8597010058056616914LL;
_Bool var_10 = (_Bool)0;
long long int var_12 = -7317535062131882370LL;
signed char var_13 = (signed char)62;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)90;
unsigned int var_17 = 1115850358U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
