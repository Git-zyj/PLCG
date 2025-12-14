#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36347;
long long int var_4 = 3156796695932712825LL;
short var_5 = (short)29533;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-14;
short var_9 = (short)11806;
int zero = 0;
unsigned long long int var_13 = 14782090139180499032ULL;
unsigned char var_14 = (unsigned char)130;
unsigned int var_15 = 2663354221U;
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
