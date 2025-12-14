#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1606;
short var_1 = (short)13330;
signed char var_4 = (signed char)-100;
unsigned short var_9 = (unsigned short)31109;
unsigned short var_10 = (unsigned short)20971;
int zero = 0;
signed char var_11 = (signed char)124;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)62016;
unsigned short var_14 = (unsigned short)36998;
unsigned short var_15 = (unsigned short)48957;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
