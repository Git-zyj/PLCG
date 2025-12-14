#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8448;
long long int var_6 = 5546230983638527486LL;
short var_11 = (short)31682;
unsigned int var_18 = 2863233000U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -66742971;
signed char var_22 = (signed char)36;
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
