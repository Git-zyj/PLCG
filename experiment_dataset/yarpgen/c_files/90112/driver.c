#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)22;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 3038570657170984694ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -872511917818364959LL;
unsigned short var_21 = (unsigned short)26361;
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
