#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2671844591U;
unsigned short var_7 = (unsigned short)59947;
unsigned int var_9 = 2896844707U;
long long int var_10 = 8586700728999397098LL;
int zero = 0;
unsigned char var_12 = (unsigned char)11;
unsigned short var_13 = (unsigned short)54979;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
