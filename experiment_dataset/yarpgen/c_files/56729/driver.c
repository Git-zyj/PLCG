#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -7935894186543588890LL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)90;
unsigned short var_6 = (unsigned short)53195;
unsigned long long int var_9 = 12149709818081699680ULL;
unsigned short var_10 = (unsigned short)14521;
signed char var_11 = (signed char)6;
unsigned int var_13 = 2458724740U;
int var_16 = -1874081027;
signed char var_17 = (signed char)-16;
int zero = 0;
unsigned int var_18 = 1807252372U;
unsigned short var_19 = (unsigned short)50737;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
