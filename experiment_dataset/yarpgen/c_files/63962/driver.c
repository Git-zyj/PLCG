#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1686018149U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_11 = (short)9625;
unsigned int var_17 = 1652366115U;
int zero = 0;
short var_19 = (short)19144;
unsigned short var_20 = (unsigned short)8501;
unsigned long long int var_21 = 5701049782484790638ULL;
_Bool var_22 = (_Bool)1;
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
