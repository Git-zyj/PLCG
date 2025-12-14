#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4603482870480955766ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -1545091842;
unsigned char var_5 = (unsigned char)20;
short var_6 = (short)-2322;
int var_8 = 460411714;
unsigned char var_9 = (unsigned char)103;
int zero = 0;
unsigned int var_14 = 498981265U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4514441445507398576ULL;
unsigned int var_17 = 2798909878U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
