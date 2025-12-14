#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3512812503U;
unsigned long long int var_2 = 8025429044562808809ULL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4656655527174712778LL;
int var_6 = 653179044;
short var_10 = (short)24992;
int zero = 0;
unsigned int var_11 = 446141690U;
unsigned long long int var_12 = 738435750104485612ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
