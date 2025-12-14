#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 428785578U;
unsigned short var_2 = (unsigned short)48877;
unsigned char var_4 = (unsigned char)171;
long long int var_5 = 5301187304916638309LL;
_Bool var_6 = (_Bool)0;
long long int var_8 = 3114646849842870029LL;
int zero = 0;
signed char var_10 = (signed char)-93;
unsigned char var_11 = (unsigned char)158;
unsigned char var_12 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
