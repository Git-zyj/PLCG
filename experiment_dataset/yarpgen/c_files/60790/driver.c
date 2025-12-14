#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 127198249;
short var_1 = (short)32584;
short var_2 = (short)-32487;
unsigned long long int var_3 = 5715450341782826716ULL;
signed char var_6 = (signed char)-39;
signed char var_7 = (signed char)-61;
signed char var_8 = (signed char)-98;
unsigned int var_10 = 371468905U;
int var_11 = 310466062;
int zero = 0;
unsigned long long int var_12 = 9755198180622054002ULL;
long long int var_13 = 133881083815284579LL;
long long int var_14 = 9176606622557044726LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
