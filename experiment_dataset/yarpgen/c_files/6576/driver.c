#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 17966683129627396266ULL;
unsigned short var_9 = (unsigned short)16838;
unsigned long long int var_10 = 11733059887394905191ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1796090395;
unsigned long long int var_15 = 16445504703212339012ULL;
long long int var_16 = -6502862476153987029LL;
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
