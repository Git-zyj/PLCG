#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
unsigned int var_5 = 1177000248U;
long long int var_6 = 6103655492331979069LL;
signed char var_8 = (signed char)-95;
signed char var_14 = (signed char)120;
short var_16 = (short)-16589;
long long int var_17 = 6782503753688874182LL;
unsigned long long int var_18 = 16634964607763213555ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7615550283020220445ULL;
short var_22 = (short)-21531;
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
