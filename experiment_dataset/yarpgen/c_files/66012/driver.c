#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23034;
signed char var_4 = (signed char)(-127 - 1);
_Bool var_5 = (_Bool)0;
long long int var_7 = 6567145806690339368LL;
_Bool var_8 = (_Bool)1;
int var_10 = -1539999213;
signed char var_12 = (signed char)-46;
unsigned short var_13 = (unsigned short)21640;
int zero = 0;
signed char var_14 = (signed char)-54;
signed char var_15 = (signed char)122;
long long int var_16 = 6771406941785129875LL;
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
