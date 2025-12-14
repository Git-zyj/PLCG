#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31830;
long long int var_2 = -452827296703987769LL;
long long int var_3 = -7258351770236961356LL;
short var_5 = (short)-9493;
unsigned long long int var_8 = 4496320754795199347ULL;
unsigned char var_9 = (unsigned char)36;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
signed char var_14 = (signed char)-24;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4181140972U;
int var_17 = 1774751731;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
