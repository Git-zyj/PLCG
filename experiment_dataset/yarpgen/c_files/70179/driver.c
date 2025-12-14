#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 472111054128445055LL;
int var_2 = 1350870525;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-32;
unsigned long long int var_16 = 10157066923195540389ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)28116;
_Bool var_19 = (_Bool)1;
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
