#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6662803109617870683LL;
_Bool var_2 = (_Bool)0;
short var_5 = (short)28973;
_Bool var_7 = (_Bool)1;
int var_10 = 346398151;
unsigned long long int var_12 = 9525305560429504707ULL;
int zero = 0;
unsigned int var_20 = 222416684U;
short var_21 = (short)9825;
signed char var_22 = (signed char)-126;
int var_23 = 1934546458;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
