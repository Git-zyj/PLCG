#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 529171505;
long long int var_2 = 1023016322003626532LL;
unsigned int var_3 = 610036314U;
short var_4 = (short)-11377;
short var_6 = (short)29842;
unsigned int var_7 = 450724073U;
short var_8 = (short)10942;
unsigned long long int var_9 = 3453447362728091538ULL;
unsigned short var_11 = (unsigned short)48087;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2249487202U;
int zero = 0;
unsigned long long int var_14 = 2735751414763960812ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8484499865276041679LL;
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
