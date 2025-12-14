#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 7937033861499743280ULL;
long long int var_4 = 4090893312967261209LL;
long long int var_5 = -6700158118219161282LL;
signed char var_6 = (signed char)-46;
unsigned long long int var_8 = 13648042692988818112ULL;
long long int var_10 = -7735461921958402981LL;
int zero = 0;
unsigned char var_11 = (unsigned char)23;
unsigned int var_12 = 908810222U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 979982029U;
short var_15 = (short)-29386;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
