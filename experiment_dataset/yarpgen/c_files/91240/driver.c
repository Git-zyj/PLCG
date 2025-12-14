#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -21615603;
int var_2 = -1404002104;
unsigned short var_3 = (unsigned short)10447;
unsigned long long int var_5 = 11146683675938615339ULL;
unsigned long long int var_7 = 2192340873861748441ULL;
unsigned long long int var_8 = 1157300935777214948ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 15833430879859106462ULL;
unsigned short var_14 = (unsigned short)35669;
unsigned short var_15 = (unsigned short)10679;
unsigned long long int var_16 = 10758749656343701032ULL;
unsigned int var_17 = 207669337U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
