#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27370;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)1443;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)24800;
unsigned long long int var_15 = 10239530729693791800ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1398023595;
void init() {
}

void checksum() {
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
