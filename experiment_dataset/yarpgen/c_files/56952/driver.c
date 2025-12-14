#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5809259544967929071LL;
_Bool var_5 = (_Bool)1;
short var_10 = (short)4719;
unsigned short var_14 = (unsigned short)25682;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-17544;
int zero = 0;
long long int var_20 = 8737849355912963701LL;
long long int var_21 = -3225983930239246786LL;
int var_22 = 904278900;
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
