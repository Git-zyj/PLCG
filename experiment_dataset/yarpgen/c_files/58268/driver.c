#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8498148648530368065LL;
unsigned int var_2 = 2756742385U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)4934;
int var_6 = -1236696129;
_Bool var_7 = (_Bool)1;
long long int var_9 = -1317236574533369394LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = 865402611;
unsigned long long int var_13 = 4643753964702188997ULL;
unsigned int var_14 = 834976305U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
