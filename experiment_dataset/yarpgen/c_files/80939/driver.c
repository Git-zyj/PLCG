#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5291285112988747682LL;
int var_6 = -547773444;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8525137013429459088LL;
int zero = 0;
signed char var_13 = (signed char)52;
int var_14 = 110166474;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
