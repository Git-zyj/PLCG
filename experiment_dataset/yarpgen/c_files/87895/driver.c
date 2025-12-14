#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned short var_1 = (unsigned short)57972;
short var_11 = (short)-32285;
int var_13 = 909428041;
long long int var_14 = 5881592657343596071LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)39161;
signed char var_21 = (signed char)-28;
signed char var_22 = (signed char)99;
unsigned long long int var_23 = 7945951392554741666ULL;
long long int var_24 = 1067683813179230748LL;
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
