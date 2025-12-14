#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)49;
unsigned short var_2 = (unsigned short)29357;
unsigned int var_3 = 3583940262U;
unsigned int var_5 = 2542184950U;
unsigned short var_8 = (unsigned short)5797;
signed char var_11 = (signed char)21;
unsigned int var_12 = 3809422144U;
short var_14 = (short)25877;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 629745955U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-31871;
unsigned long long int var_22 = 8380594067093663787ULL;
short var_23 = (short)-2545;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
