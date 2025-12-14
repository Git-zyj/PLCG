#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)101;
_Bool var_7 = (_Bool)0;
long long int var_8 = 8687775709812294931LL;
int zero = 0;
short var_12 = (short)25321;
unsigned int var_13 = 3105258344U;
int var_14 = 110238430;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
