#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1780565057;
unsigned char var_1 = (unsigned char)219;
long long int var_2 = 5388078857554133212LL;
_Bool var_3 = (_Bool)0;
long long int var_9 = -8112357698829923183LL;
unsigned short var_14 = (unsigned short)20466;
int zero = 0;
unsigned int var_16 = 1320056030U;
unsigned int var_17 = 2700087458U;
short var_18 = (short)12647;
unsigned int var_19 = 3719206643U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
