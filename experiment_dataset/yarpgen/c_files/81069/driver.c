#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned long long int var_2 = 8673384400383887020ULL;
int var_5 = 2112369586;
long long int var_6 = -2472632573191983116LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3049992794U;
unsigned int var_14 = 533350305U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
