#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)33481;
_Bool var_3 = (_Bool)0;
long long int var_4 = -2011837314836517667LL;
unsigned long long int var_5 = 15142220229216911730ULL;
unsigned long long int var_6 = 4193052317702483896ULL;
unsigned long long int var_7 = 4102078340072406892ULL;
_Bool var_8 = (_Bool)0;
int var_9 = 1136069547;
int zero = 0;
unsigned long long int var_10 = 11617906294919963119ULL;
short var_11 = (short)-25421;
signed char var_12 = (signed char)-47;
long long int var_13 = 8640207979177077399LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
