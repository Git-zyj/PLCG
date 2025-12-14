#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30517;
int var_4 = 1907810704;
long long int var_5 = -6346302050239635944LL;
unsigned short var_6 = (unsigned short)27440;
unsigned int var_7 = 1131920998U;
short var_8 = (short)-14113;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)55182;
long long int var_15 = 5307467266363248211LL;
unsigned long long int var_16 = 12155340800628812964ULL;
void init() {
}

void checksum() {
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
