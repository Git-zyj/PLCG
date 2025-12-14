#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30853;
unsigned long long int var_6 = 10514467941367648799ULL;
unsigned short var_7 = (unsigned short)35455;
int var_8 = -45818740;
signed char var_10 = (signed char)43;
int zero = 0;
unsigned short var_11 = (unsigned short)13681;
unsigned char var_12 = (unsigned char)163;
unsigned short var_13 = (unsigned short)27298;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8176752151089851836LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
