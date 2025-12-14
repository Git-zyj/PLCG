#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16168805072560987610ULL;
unsigned int var_4 = 3198378842U;
short var_7 = (short)-23532;
unsigned int var_9 = 3061510529U;
unsigned long long int var_10 = 13615644704021628709ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13909370263850820464ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13494521775251390811ULL;
void init() {
}

void checksum() {
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
