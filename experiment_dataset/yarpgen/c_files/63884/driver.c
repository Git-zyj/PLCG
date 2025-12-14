#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3711041193U;
long long int var_4 = 6649695949042500894LL;
unsigned short var_5 = (unsigned short)11802;
short var_9 = (short)-4262;
unsigned int var_10 = 2751605135U;
short var_11 = (short)18774;
unsigned long long int var_12 = 15249992814773171453ULL;
int zero = 0;
short var_13 = (short)20064;
signed char var_14 = (signed char)-5;
long long int var_15 = -4537714100492409704LL;
void init() {
}

void checksum() {
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
