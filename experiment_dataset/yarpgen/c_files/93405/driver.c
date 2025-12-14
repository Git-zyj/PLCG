#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6006652089747445668ULL;
unsigned long long int var_4 = 2480477683491774976ULL;
unsigned int var_5 = 2601665504U;
unsigned short var_6 = (unsigned short)463;
unsigned short var_7 = (unsigned short)12193;
unsigned int var_9 = 1283698694U;
int var_10 = -2001755476;
long long int var_11 = 5394545558547332927LL;
unsigned long long int var_13 = 3713364544462564615ULL;
int zero = 0;
signed char var_14 = (signed char)17;
unsigned long long int var_15 = 3951285525816245931ULL;
unsigned char var_16 = (unsigned char)62;
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
