#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
short var_7 = (short)-11194;
int var_14 = 1421826479;
long long int var_18 = -6885664899597988267LL;
int zero = 0;
unsigned short var_19 = (unsigned short)10678;
int var_20 = -277130351;
short var_21 = (short)-15909;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
