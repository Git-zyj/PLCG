#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4163471906U;
short var_4 = (short)-29380;
unsigned int var_6 = 1117234228U;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 4114413731U;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4002551449U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
