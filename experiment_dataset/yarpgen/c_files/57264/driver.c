#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-46;
short var_4 = (short)21142;
unsigned int var_6 = 2787481706U;
_Bool var_10 = (_Bool)0;
int var_12 = -2125211351;
long long int var_13 = -6898271385964482205LL;
int zero = 0;
unsigned char var_15 = (unsigned char)163;
long long int var_16 = -137379137904205050LL;
void init() {
}

void checksum() {
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
