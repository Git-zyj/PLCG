#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11030146470353629517ULL;
long long int var_5 = -3926398097565032161LL;
short var_6 = (short)25907;
unsigned int var_8 = 3333030834U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)35134;
unsigned long long int var_12 = 11969107790635368978ULL;
unsigned short var_13 = (unsigned short)54490;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
