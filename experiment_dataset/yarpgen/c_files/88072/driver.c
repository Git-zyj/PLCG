#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1348790941194686335ULL;
short var_3 = (short)21161;
_Bool var_5 = (_Bool)0;
short var_9 = (short)-6186;
int zero = 0;
int var_10 = 66546918;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15429079386525843867ULL;
_Bool var_13 = (_Bool)0;
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
