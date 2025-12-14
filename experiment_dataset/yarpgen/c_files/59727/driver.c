#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31024;
unsigned int var_4 = 1370061469U;
_Bool var_5 = (_Bool)0;
int var_9 = -911188112;
unsigned char var_10 = (unsigned char)88;
int zero = 0;
unsigned long long int var_13 = 15462319995510923034ULL;
short var_14 = (short)-15356;
unsigned short var_15 = (unsigned short)34386;
long long int var_16 = -6453671073012304170LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
