#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10796349086409854331ULL;
short var_4 = (short)9743;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)6486;
long long int var_9 = 6560402664630600775LL;
int zero = 0;
unsigned short var_12 = (unsigned short)14021;
unsigned short var_13 = (unsigned short)46567;
unsigned short var_14 = (unsigned short)10446;
void init() {
}

void checksum() {
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
