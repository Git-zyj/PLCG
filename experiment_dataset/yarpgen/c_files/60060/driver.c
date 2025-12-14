#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2947061031624905232LL;
unsigned int var_2 = 2664553919U;
short var_3 = (short)16735;
unsigned int var_5 = 2765350246U;
long long int var_8 = -1569552674725441474LL;
unsigned char var_9 = (unsigned char)192;
int zero = 0;
int var_11 = 1831430872;
unsigned long long int var_12 = 5516164948822164727ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
