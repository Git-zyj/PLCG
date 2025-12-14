#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13052;
_Bool var_9 = (_Bool)0;
signed char var_13 = (signed char)60;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 975808285U;
unsigned short var_20 = (unsigned short)3294;
unsigned char var_21 = (unsigned char)152;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)38645;
unsigned char var_24 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
