#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5558;
int var_5 = -106672712;
unsigned int var_10 = 1238747497U;
int var_11 = 692791286;
int var_15 = -1033772429;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5381496698718081009LL;
unsigned long long int var_18 = 9848848153735603618ULL;
signed char var_19 = (signed char)75;
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
