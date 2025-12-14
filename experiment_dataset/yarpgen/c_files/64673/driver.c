#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned short var_3 = (unsigned short)34931;
unsigned long long int var_6 = 3687931065541610019ULL;
long long int var_10 = -6093231479395501163LL;
unsigned int var_11 = 764362443U;
long long int var_15 = 2788774793004468760LL;
int zero = 0;
short var_16 = (short)16931;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)2962;
unsigned short var_19 = (unsigned short)4359;
signed char var_20 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
