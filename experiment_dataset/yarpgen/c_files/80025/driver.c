#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
unsigned int var_4 = 3843039619U;
short var_5 = (short)22829;
signed char var_6 = (signed char)101;
short var_9 = (short)17815;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2079746166U;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1200680777;
unsigned long long int var_21 = 6355628128914109829ULL;
int var_22 = -2139494249;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
