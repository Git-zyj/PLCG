#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)98;
unsigned char var_3 = (unsigned char)65;
unsigned char var_11 = (unsigned char)226;
int zero = 0;
unsigned int var_14 = 1396552124U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)54533;
long long int var_17 = -8005303173455017949LL;
unsigned short var_18 = (unsigned short)20101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
