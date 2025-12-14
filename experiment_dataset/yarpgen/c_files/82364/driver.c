#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2777791065U;
signed char var_2 = (signed char)16;
unsigned long long int var_5 = 2796189566593632006ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)4251;
signed char var_16 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
