#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3853063745U;
unsigned long long int var_3 = 2710042859739061451ULL;
unsigned char var_4 = (unsigned char)139;
signed char var_5 = (signed char)111;
unsigned long long int var_6 = 11927019217294010888ULL;
unsigned int var_7 = 1472996176U;
unsigned int var_11 = 902306780U;
int var_12 = 1931337089;
int zero = 0;
long long int var_14 = 7496957823504366451LL;
signed char var_15 = (signed char)-54;
_Bool var_16 = (_Bool)1;
int var_17 = -1910124970;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
