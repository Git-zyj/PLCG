#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1077123083;
unsigned long long int var_2 = 486743923994608622ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = 9159042545085445696LL;
unsigned short var_7 = (unsigned short)64768;
unsigned int var_9 = 1578998495U;
int zero = 0;
signed char var_11 = (signed char)-115;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-17404;
unsigned short var_14 = (unsigned short)4176;
short var_15 = (short)22588;
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
