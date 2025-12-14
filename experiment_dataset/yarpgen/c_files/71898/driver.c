#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1397321576U;
signed char var_5 = (signed char)-61;
unsigned int var_6 = 2578490368U;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)-1109;
int var_13 = -48580569;
void init() {
}

void checksum() {
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
