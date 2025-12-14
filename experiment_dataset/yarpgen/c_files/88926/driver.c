#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14752997668235430575ULL;
short var_16 = (short)29620;
unsigned int var_17 = 3696556955U;
int zero = 0;
signed char var_18 = (signed char)-52;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)65420;
long long int var_21 = -2573455571351144624LL;
unsigned long long int var_22 = 9833809282231816340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
