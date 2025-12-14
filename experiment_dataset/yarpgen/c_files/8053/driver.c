#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4721081029948228781ULL;
int var_5 = 717739390;
long long int var_7 = 1330865916155788306LL;
long long int var_13 = 6747332733408737370LL;
unsigned long long int var_15 = 14625749676084777135ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)-27850;
signed char var_18 = (signed char)10;
long long int var_19 = -5952645915702296392LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
