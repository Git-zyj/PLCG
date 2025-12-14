#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1201;
long long int var_2 = -2995601148706516971LL;
unsigned int var_3 = 19454998U;
unsigned int var_4 = 1324842696U;
unsigned short var_6 = (unsigned short)27914;
long long int var_8 = 4795490437110904731LL;
int var_9 = 1094015525;
unsigned short var_10 = (unsigned short)20683;
int zero = 0;
unsigned int var_11 = 2706653786U;
unsigned char var_12 = (unsigned char)252;
int var_13 = -246056612;
unsigned char var_14 = (unsigned char)0;
long long int var_15 = -8363050221042699112LL;
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
